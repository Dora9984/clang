/*
���ϸ�: ex08-04-loop-break.c

break ��
    �ݺ������� break���� �ݺ����� ��� �����ϴ� ��ɾ�!

Ctrl + A : ��ü���� ����Ű

Ctrl + K + F : �ڵ����� ����Ű

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;
    while (1) // 1�� ���̱� ������ ��� �����
    {
        printf("-1 �Է½� ����: ");
        scanf("%d", &num);
        if (num == -1)
            break;

        printf("%d��(��) �Է��ϼ̳׿�.\n", num);
    }

    printf("���α׷� ����!\n");

    return 0;
}