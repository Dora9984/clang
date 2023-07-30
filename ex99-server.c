

/*
 C:\msys64\mingw64\bin\gcc.exe -fdiagnostics-color=always -g C:\clang\ex99-server.c -o C:\clang\ex99-server.exe -lws2_32


1. Winsock�� ����� �� �ֵ��� �ʱ�ȭ(Initialize)�Ѵ�. 
2. ������ ������ ����(create)�Ѵ�. 
3. IP �ּҿ� PORT ��ȣ�� ���� ������ ���Ͽ� ����(bind)�ش�.
������ Ŭ���̾�Ʈ�� ��û�� ���� �� �ִ� ����(listen)�� �ǵ��� �Ѵ�.
Ŭ���̾�Ʈ�� ��û�� ������ �޴´�(accept).
�ش� �������� 1���� Ŭ���̾�Ʈ�� ���� ���̱� ������ ���� listening ���� ������ ������ �ݴ´�(close).
=> ��� ��ſ� ����Ǵ� �ܰ�� �ƴ�
send/recv�� ���� �Լ��� ���� Ŭ���̾�Ʈ�� �����͸� �ְ� �޴´�. (Do something loop)
7�� ������ ������, Ŭ���̾�Ʈ�� ����� ������ �ݴ´�(close).
Winsock�� ����� ����(cleanup, terminate)�Ѵ�. (1���� ��Ī�Ǵ� �ܰ�)
=> terminate��� �Ѵ�. 

*/

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <winsock2.h>           // �����쿡�� ������ ����ϱ� ���� ��� ����
    #pragma comment(lib, "ws2_32.lib") // �����쿡�� ���� ���̺귯�� ��ũ ���ù�
#else
    #include <sys/socket.h>
    #include <netinet/in.h>
    #define SOCKET int
    #define INVALID_SOCKET -1
    #define SOCKET_ERROR -1
    #define closesocket(s) close(s) // ���н� �迭���� ������ �ݱ� ���� ��ũ��
#endif

#define PORT 9090               // ������ ��Ʈ ��ȣ
#define BUFFER_SIZE 1024        // ���� ũ�� ����

int main() {
#ifdef _WIN32
    WSADATA wsaData;            // 1. �����쿡�� ���� �ʱ�ȭ�� ���� ����ü
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("Failed to initialize winsock\n");
        return -1;
    }
#endif

    int server_fd, new_socket, valread;
    struct sockaddr_in address;     // �ּ� ������ ��� ����ü
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};

    // 2. ���� ����
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        perror("socket failed");
        return -1;
    }

    // 3. ���� �ɼ� ����
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, (const char*)&opt, sizeof(opt)) == SOCKET_ERROR) {
        perror("setsockopt failed");
        return -1;
    }

    address.sin_family = AF_INET;        // IPv4 �ּ� ü�� ���
    address.sin_addr.s_addr = INADDR_ANY; // ��� IP �ּҿ��� ���� ���
    address.sin_port = htons(PORT);      // ��Ʈ ��ȣ ����

    // 4. ���ϰ� �ּ� ���ε�
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) == SOCKET_ERROR) {
        perror("bind failed");
        return -1;
    }

    // 5. Ŭ���̾�Ʈ�� ������ ��ٸ�
    if (listen(server_fd, 3) == SOCKET_ERROR) {
        perror("listen failed");
        return -1;
    }

    printf("Server is listening on port %d\n", PORT);

    // 6. Ŭ���̾�Ʈ�� ������ ����
    if ((new_socket = accept(server_fd, (struct sockaddr*)&address, (int*)&addrlen)) == INVALID_SOCKET) {
        perror("accept failed");
        return -1;
    }

    // 7. Ŭ���̾�Ʈ���� ä�� ����
    while (1) {
        memset(buffer, 0, BUFFER_SIZE);

        // Ŭ���̾�Ʈ���� �޽��� ����
        valread = recv(new_socket, buffer, BUFFER_SIZE, 0);
        printf("Client: %s\n", buffer);

        // ���� ���� �˻�
        if (strcmp(buffer, "bye") == 0)
            break;

        // �������� �޽��� �Է�
        printf("Server: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        // Ŭ���̾�Ʈ�� �޽��� ����
        send(new_socket, buffer, strlen(buffer), 0);
    }

    // ���� ����
    closesocket(new_socket); // Ŭ���̾�Ʈ ���� �ݱ�
    closesocket(server_fd);  // ���� ���� �ݱ�

#ifdef _WIN32
    WSACleanup(); // �����쿡�� ���� ���̺귯�� ����
#endif

    return 0;
}