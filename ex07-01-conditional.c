/*
���ϸ�: ex07-01-conditional.c

���ǹ�
    ���ǽ��� ����� ���� ������ ����� �����ϵ��� �����ϴ� �ڵ�

1-1 if��
    if(����)
    {
        ������ ���� ��� �����ڵ�
    }

    if(����)
        �����ڵ�; (�ڵ尡 �ϳ��� ���)

1-2 if ~ else ��
    if(����)
    {
        ������ ���� ��� �����ڵ�
    }
    else
    {
        ������ ������ ��� �����ڵ�
    }

    if(����)
        �� ������ �ڵ�; (�ڵ尡 �ϳ��� ���)
    else
        ���� ������ �ڵ�; (�ڵ尡 �ϳ��� ���)

1-3 if ~ else if ~ else ��
    ���� ���� �߰� ����

    if(����1)
    {
        ����1 ���� ��� �����ڵ�
    }
    else if(����2)
    {
        ����2 ���� ��� �����ڵ�
    }
    else if(����3)
    {
        ����3 ���� ��� �����ڵ�
    }
    else 
    {
        ��� ���ǵ��� ������ ��� �����ڵ�
    }
*/
#include <stdio.h>
int main(void)
{
    // 1-1 if��
    int num = 3;
    
    if(num < 3)
        printf("num is small than 3!\n");  // �����̸� ������� ����
    
    if(num == 3)
        printf("num is 3!\n"); // ���ǹ��� ���� ��� �����

    if(num > 3)
        printf("num is bigger than 3!\n");

    // 1-2 if~else ��
    char alpha = 'A';

    if(alpha == 'B')
        printf("alpha is B.\n");
    else
        printf("alpha is not B.\n");

    // 1-3 if ~ else if ~ else ��
    int score = 75;

    if(score > 90)
        printf("�� �Դϴ�.\n");
    else if (score > 80)
        printf("�� �Դϴ�.\n");
    else if (score > 70)
        printf("�� �Դϴ�.\n"); // else if�� ��� �ۼ��ϸ� �տ��� ������ ����Ʈ�� �Ǹ� �ǿ� ���ǹ��� ����Ʈ���� �ʴ´� 
    else if (score > 60)
        printf("�� �Դϴ�.\n");
    else
        printf("�� �Դϴ�.\n");

    return 0;
    
}