/*
���ϸ�: ex07-02-conditional.c

2. switch ��

*/
#include <stdio.h>

int main(void)
{
    int num = 1;
    switch (num) // switch ���� ���� case ���� ���Ͽ� ���̸� ��ȯ
    {
    case 0:
        printf("0 �Դϴ�. \n");
        break;
    case 1:
        printf("1 �Դϴ�. \n");
        break;
    case 2:
        printf("2 �Դϴ�. \n");
        break;
    case 3:
        printf("3 �Դϵ�. \n");
        break;
    default:
        printf("0 ~ 3 �� �ƴմϴ�.");
        break;
    }


    char btn = 'a';

    switch (btn)
    {
    case 'w':
        printf("������ �̵�\n");
        break; // break���� ������ ������ �ʰ� �ؿ� �ڵ���� �����ع���
    case 'a':
        printf("�������� �̵�\n");
        break; 
    case 's':
        printf("�ڷ� �̵�\n");
        break;
    case 'd':
        printf("�������� �̵�\n");
        break;
    default:
        printf("Hold!\n");
        break;
    }

    /*
    
    rtnCd 
        1: ȯ�ҽ�û
        2: ������
        3: ��ü��
        4: �Ϸ�
    
    */

    int rtnCd = 1;

    switch (rtnCd)
    {
    case 1:
    case 2:
    case 3:
        printf("ȯ�� �Ұ� ���� rtnCd: %d\n", rtnCd);
        break;
    }

    return 0;
}