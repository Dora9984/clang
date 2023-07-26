/*
���ϸ�: ex19-04-typedef.c

typedef
    �ڷ��� �̸��� ������� ���� �� �ִ�.
    �ڷ��� �̸��� �߰��Ȱ��� ���� �ڷ��� �̸��� ����Ȱ� �ȴϴ�.
*/

#include <stdio.h>

// int�� ����, int�� ����������, ��ȣ���� int�� ������ ���� �̸� ���̱�
typedef int INT;
typedef int* PINT;
typedef unsigned int UINT;

int main(void)
{
    // ���� ������ ����� �ڷ��� �̸��� ���� ����
    typedef char CHAR;
    typedef char* STR;

    // typedef ���� ���� �ڷ����� ���� �ڷ����� ������ ���� ����
    INT num = 3;
    PINT ptr = &num;
    UINT unum = 5;

    CHAR ch = 'c';
    STR str = "Hello!";

    printf("%d %d %d\n", num, *ptr, unum);
    printf("%c %s\n", ch, str);

    return 0;
}