/*
���ϸ�: ex17-04-function-pointer.c

�Լ� ������
    �Լ��� �޸� �ּҰ� ����
    �Լ��� �̸��� �Լ��� ����� �޸� ������ �ּҰ�

*/

#include <stdio.h>

int myFunc(int num1, int num2)
{
    printf("num1: %d, num2: %d\n", num1, num2);
}

int main(void)
{
    /*
        �Ű������� int�� ���� �ΰ� ����Ǿ� �ְ�,
        int�� �����͸� ��ȯ�ϴ� �Լ��� �ּҸ� ������ �� �ִ�
        �Լ� ������ fptr�� ����!
    */
   int (*fptr)(int, int);

   fptr = myFunc; // �Լ� ������ ����! fptr�� myFunc �Լ�ó�� ����� �� ����
   fptr(9, 6);

   return 0;



}