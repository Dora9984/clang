/*
���ϸ�: ex08-02-loop-do-while.c

2. do ~ while��
    while���� �����ϳ�, ���� �ѹ��� ���� �ȴ�.
*/

#include <stdio.h>
int main(void)
{
    int num = 0;
    do {
        printf("num is %d now\n", num);
        num++;
    } while (num < 3);

    return 0;
}