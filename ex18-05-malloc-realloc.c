/*
���ϸ�: ex18-05-malloc-realloc.c
*/

#include <stdio.h>
#include <stdlib.h>

#define INITAL_BUFFER_SIZE 1 // �ʱ� ���ۻ����� 1�� ����

int main(void)
{
    int c;
    int len = 0;
    int buffer_size = INITAL_BUFFER_SIZE;
    // ���� �޸� �Ҵ����� ���ڿ� �����Ϳ� �޸𸮰��� �Ҵ�
    char* str = (char*)malloc(buffer_size);

    if(str == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: "); // ����ڿ��� ���ڿ� �Է� ��û

    while((c = getchar()) != '\n' && c != EOF)
    {
        /*
        len = 0;
        str[0] = 'a'
        len = 1;
        buffer_size = 2
        str[1] = 'b'
        len = 2;
        buffer_size = 4
        str[2] = 'c'
        len = 3;
        str[3] = 'd'
        len = 4;
        buffer_size = 8

        */
        str[len++] = c; // ���ڿ��� ���� �߰�

        //���� ���ڿ� ���̰� ���� ������� ���ٸ�
        if(len ==  buffer_size)
        {
            buffer_size *= 2; //���� ����� 2��� �ø�
            // �޸� ���Ҵ����� ���ۻ����� �ø�
            str = realloc(str, buffer_size); 

            // �޸� ���Ҵ� ���н� ���� �޽��� ��� �� ���α׷� ����
            if (str == NULL)
            {
                printf("Memory allocation failed\n");
                return 1;
            }
        }
    }

    str[len] = '\0'; // ���ڿ� ���� NULL ���� �߰�

    printf("You entered %s\n", str);

    free(str); // �������� �Ҵ��� �޸� ����

    return 0;
}