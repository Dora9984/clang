/*
���ϸ�: ex09-02-array.c

���ڿ�
    ������ �迭�̴�.
    ���ڵ��� ���ӵ� �������� ��Ÿ����,
    ���ڿ� ���� ������ NULL����('\0')�� ������.

NULL����('\0')
    ���ڿ� ���� ��Ÿ���� Ư���� �����̴�.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    /*
    ���� �������� �Ѱ� �� ���� 13���
    �̴� �������ƴ� �������� '\0' �̶�� ���ڸ� �����ϱ� �����̴�.
    
    */
    char greet[] = "Hello, Guys!";
    printf("1���� �迭 greet�� ���̴�: %d\n", sizeof(greet));

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);

    //"I Love \0rogramming!                  ";
    mind[7] = '\0'; // 8��° ��ҷ� null ���� ����
    printf("%s\n", mind);
    mind[7] = 'P';
    printf("%s\n", mind);

    printf("sizeof: %d\n", sizeof(mind));

    char str[50];
    printf("���ڿ��� �Է��ϼ���: ");
    scanf("%s", str);

    printf("�Էµ� ���ڿ�: %s\n", str);
    return 0;
}