/*
���ϸ�: ex18-01-heap.c

�� ������ �ʿ伺
    ���� ó�� �������� ���� �Լ��� ����� �Ҹ�
    �������� ���� �ڵ尡 ���������� ������ ����� �� �� �ִ�.
    
*/
#include <stdio.h>

char* getString(void)
{
    char str[100];
    printf("�����ϴ� �ܾ��?");
    gets(str); //���ڿ� �Է��Լ�

    printf("�Լ� �ȿ��� ���: %s\n", str);

    return str;

}

int main(void)
{
    char* result = getString();

    printf("����� �����ϴ� �ܾ��: %s\n", result);
    return 0;
}