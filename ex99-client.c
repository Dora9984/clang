/*
C:\msys64\mingw64\bin\gcc.exe -fdiagnostics-color=always -g C:\clang\ex99-client.c -o C:\clang\ex99-client.exe -lws2_32
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
    #include <winsock2.h>           // �����쿡�� ������ ����ϱ� ���� ��� ����
    #pragma comment(lib, "ws2_32.lib") // �����쿡�� ���� ���̺귯�� ��ũ ���ù�
#else
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <arpa/inet.h>
    #define SOCKET int
    #define INVALID_SOCKET -1
    #define SOCKET_ERROR -1
    #define closesocket(s) close(s) // ���н� �迭���� ������ �ݱ� ���� ��ũ��
#endif

#define PORT 9090               // ������ ��Ʈ ��ȣ
#define BUFFER_SIZE 1024        // ���� ũ�� ����

int main() {
#ifdef _WIN32
    WSADATA wsaData;            // �����쿡�� ���� �ʱ�ȭ�� ���� ����ü
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        printf("Failed to initialize winsock\n");
        return -1;
    }
#endif

    int sock = 0, valread;
    struct sockaddr_in serv_addr;   // ���� �ּ� ������ ��� ����ü
    char buffer[BUFFER_SIZE] = {0}; // �޽����� ������ ����

    // ���� ����
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) {
        printf("\n Socket creation error \n");
        return -1;
    }

    // �ּ� ����
    serv_addr.sin_family = AF_INET;         // IPv4 �ּ� ü�� ���
    serv_addr.sin_port = htons(PORT);       // ��Ʈ ��ȣ ����

#ifdef _WIN32
    // IP �ּҸ� ���ڿ��� ��ȯ�Ͽ� ���� (�����쿡���� inet_addr ���)
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
#else
    // IP �ּҸ� ���ڿ��� ��ȯ�Ͽ� ���� (���н� �迭������ inet_pton ���)
    if (inet_pton(AF_INET, "127.0.0.1", &(serv_addr.sin_addr)) <= 0) {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }
#endif

    // ������ ����
    if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }

    // �������� ä��
    while (1) {
        memset(buffer, 0, BUFFER_SIZE);

        // Ŭ���̾�Ʈ���� �޽��� �Է�
        printf("Client: ");
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        // ���� ���� �˻�
        if (strcmp(buffer, "bye") == 0) {
            send(sock, buffer, strlen(buffer), 0); // 'bye' �޽��� ����
            break;
        }

        // ������ �޽��� ����
        send(sock, buffer, strlen(buffer), 0);

        // �������� �޽��� ����
        valread = recv(sock, buffer, BUFFER_SIZE, 0);
        printf("Server: %s\n", buffer);
    }

    // ���� ����
    closesocket(sock); // ���� �ݱ�

#ifdef _WIN32
    WSACleanup(); // �����쿡�� ���� ���̺귯�� ����
#endif

    return 0;
}