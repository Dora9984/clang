/*
���ϸ�: ex15-04-function4.c
*/
#include <stdio.h>

// �Է�(�Ű�����)���� ��ȯ(return)���� ��� ���� �Լ�
void guide(void)
{
    printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
    printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}

// �Է°��� �����ϴ� ���
void printNumber(int num)
{
    printf("����� �Է��� ������ %d�Դϴ�.\n", num);
}

// ��ȯ���� �����ϴ� ���
int inputNumber(void)
{
    int num;
    printf("������ �Է��� �ּ���: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    guide();
    int num = inputNumber(); // ������ �� �Է�
    printNumber(num);

    return 0;
}