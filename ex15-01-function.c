/*
���ϸ�: ex15-01-function.c

�Լ�(function)��?
    ���α׷��ֿ��� �Լ�(function)��
    �ϳ��� Ư���� ������ �ڰ��� �����ϱ�����
    ���������� ����� ���α׷� �ڵ��� ����.

����Ÿ�� �Լ���(�Ű�����Ÿ�� �Ű�������)
{
    ������ �ڵ� ����

    return ���ϰ�;
}
*/
#include <stdio.h>

// ����� ���� �Լ��� ����
int add(int a, int b)   //  int a = 3, int b = 5    (�Ű�����, ����, �Ķ��Ÿ)
{   
    printf("add �Լ� ����!\n");
    return a + b;   // a+b => 8
}

int main(void)
{
    int result;

    // ����� ���� �Լ� ȣ��
    result = add(3, 5);
    printf("�Լ��� ��ȯ�� ��: %d\n", result);

    result = add(5, 2);

    printf("�Լ��� ��ȯ�� ��: %d\n", result);

    return 0;
}