/*
���ϸ�: ex13-02-char-function.c

char ���� �Լ�
    getchar()
        ���� �Է� �Լ�
    putchar()
        ���� ��� �Լ�
*/

#include <stdio.h>

int main(void)
{
    // ǥ�� �Է¿��� 1���� ����(char) �Է¹ޱ�
    // char ch = getchar(); 
    // printf("�Է��� ����: %c\n", ch);

    int ch1, ch2, temp;
    ch1 = getchar();
    printf("ch1: %d\n", ch1);
    temp = getchar();
    printf("temp: %d\n", temp);
    ch2 = getchar();
    printf("ch2: %d\n", ch2);

    putchar(ch1); putchar(ch2);



    return 0;
} 