/*
���ϸ�: ex16-03-call-by-value.c

call by value
    �⺻���� ���� �Ű�����, ���� �� ����

*/
#include <stdio.h>

void swapNumber(int num1, int num2) // num1 = 33, num2 = 99
{
    // ���� swap �ڵ�
    int temp = num1;
    num1 = num2;
    num2 = temp;
    // num1 = 99, num2 = 33�� swap

    printf("�Լ� �ȿ��� Ȯ���� ���, num1: %d num2: %d\n", num1, num2);
}

int main(void)
{
    int number1 = 33, number2 = 99;
    swapNumber(number1, number2);
    printf("�Լ� ȣ�� �Ϸ��� Ȯ���� ���, number1: %d, number2: %d\n", number1, number2);

    return 0;
}