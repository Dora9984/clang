/*
���ϸ�: ex15-07-static.c

static ����(��������)
    �Լ�����(����), �Լ��ܺ�(����)������ ��밡��
    ���α׷��� ���۵� �� �Ҵ�ǰ� ���α׷��� ������ �Ҹ�ȴ�.

*/
#include <stdio.h>

int gNumber = 10;

void increaseNumber()
{
    static int number = 0; // static �������� number ����

    number++;
    printf("number: %d\n", number);

}

int main(void)
{
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();

    return 0;
}