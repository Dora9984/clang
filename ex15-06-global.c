/*
���ϸ�: ex15-06-global.c

��������
    ���α׷��� ���۰� ���ÿ� �޸� ������ �Ҵ�Ǿ�
    ���� �� ������ ���� 
    ���α׷� ��� �������� ���� ����
    ���������� �������� �̸��� ������ ��� ���������� ���ȴ�.
*/

#include <stdio.h>

// ��������
int number = 0;

void printNumber(void)
{
    printf("���� ���� number�� %d�� �����ϰ� �ִ�.\n", number);
}

int main(void)
{   
    // �������� number
    int number = 3;
    printf("�������� number�� %d�� �����ϰ� �ִ�.\n", number);
    printNumber();
    return 0;
}