/*
���ϸ�: ex08-01-loop.c

�ݺ���
    Ư���� �κ��� �ڵ尡 �ݺ������� ����� �� �ֵ��� �ϴ� ����(while ���� ������ �ɶ����� �����)

1. while ��
    while(����)
    {
        �ݺ� ����� �ڵ�
    }
#define _CRT_SECURE_NO_WARNINGS
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
/*    int num = 0;
    while (num < 3)
    {
        printf("num is %d now\n", num);
        num++;  // ���� ���������� num = num + 1 ����
    }
    printf("End while�� - num is %d now\n", num); */

    int num2 = 0;
    while (num2 != -1) // num2�� -1�� �ƴϸ� ����
    {
        printf("���ڸ� �Է��ϼ���(-1 �Է½� ����): ");
        scanf("%d", &num2); // ���� �տ� &�� ���̸� �� ���� �ּҰ��� �Ѱ���

        if(num2 == -1)
            printf("�����մϴ�.\n");
        else
            printf("%d��(��) �Է��ϼ̳׿�.\n", num2);

    }


    return 0;

    }
