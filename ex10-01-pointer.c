/*
���ϸ�: ex10-01-pointer.c

������
    �޸��� �ּҰ��� �ǹ��ϸ� �ּҰ��� �����ϴ� ������ ������
    '������ ����' ��� �Ѵ�.

    & �ּҿ����� : �����տ� �پ ������ �޸� ���� �ּҰ��� ���Ѵ�.
    * ������ : �����ͺ����� ������ �� ���
    * ���� ���� ������(dereference operator or indirection operator) 
        : ����� ������ ������ ����Ű�� ����
    

*/

#include <stdio.h>

int main(void)
{
    int inum = 999;

    int* iptr = &inum; // ������ ���� ����. inum�� �ּҰ��� ���� ����

    printf("%p\n", iptr);   // 00000000005ffe9c
    printf("%p\n", &iptr);  // 00000000005ffe90

    printf("%d\n", *iptr);  // *iptr == inum



    int num = 10;
    int* pnum;
    pnum = &num; // ������ ���� pnum�� num�� �ּҸ� ����

    printf("%d\n", *pnum);

    printf("1) num�� �ּҰ�: %p\n", &num);
    printf("2) pnum�� ��: %p\n", pnum);

    num = 14;
    printf("3) num�� �ּҰ�: %p\n", &num);
    printf("4) pnum�� ��: %p\n", pnum);

    printf("5) num: %d\n", num);
    printf("6) *pnum: %d\n", *pnum);

    *pnum = 30;
    printf("7) num: %d\n", num);
    (*pnum)++;
    (*pnum)++;
    printf("8) num: %d\n", num);
    printf("9) *pnum: %d\n", *pnum);

    return 0;
}