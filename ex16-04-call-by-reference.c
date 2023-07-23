/*
���ϸ�: ex16-04-call-by-reference.c

call by reference
    ������ �Ű�����, �ּҰ� ����

*/
#include <stdio.h>

void swapNumber(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("�Լ� �ȿ��� Ȯ���� ���, *num1: %d *num2: %d\n", *num1, *num2);
}

int main(void)
{
    int number1 = 33, number2 = 99;
    printf("%p, %p\n", &number1, &number2);

    swapNumber(&number1, &number2);
    printf("�Լ� ȣ�� �Ϸ��� Ȯ���� ���, number1: %d, number2: %d\n", number1, number2);
    
    return 0;

}

// call-by-reference ������ �ּҰ��� �������ֱ� ������ call-by-value ������ �ٸ��� ���� �ڷᰪ�� ������ ����
// scanf���� �ּҰ��� �޴� ������ ���� ������