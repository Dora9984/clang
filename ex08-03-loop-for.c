/*
���ϸ�: ex08-03-loop-for.c

3. for ��

    for(���� �ʱ�ȭ; ���ǽ�; ������)
    {
        �ݺ� ������ �ڵ�
    }
*/

#include <stdio.h>

int main(void)
{

    for (int i = 0; i < 3; i++)
    {
        printf("i is %d now\n", i);
    }

    int j = 0;
    while (j < 3)
    {
        printf("j is %d now\n", j);
        j++;
    }


    return 0;
}