/*
���ϸ�: ex08-05-loop-continue.c

continue ��
    �ݺ������� �ش� �ݺ��� �ǳʶٰ� ���� �ݺ��� �����ϵ��� 
    �����ϴ� ��ɾ�
*/

#include <stdio.h>

int main(void)
{
    int num;
    for (num = 1; num <= 5; num++)
    {
        if (num == 3)
            continue;
        
        printf("%d\n", num);
    }
    return 0;
}