/*
���ϸ�: ex15-05-local.c

��������
    Ư������({}�ڵ��) �������� ��밡���� ����
    �Ű������� ���������� �����̴�.
*/
#include <stdio.h>

int localFunc(int num) // int num = 5
{
    int result = 0;
    return result + num;
} // ������������ �Լ��� ����Ǹ� ���� �Ҹ��

int main(void)
{
    int num = 5;
    int result = localFunc(num);

    printf("���: %d\n", result);

    return 0;
}