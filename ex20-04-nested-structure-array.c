/*
���ϸ�: ex20-04-nested-structure-array.c

��ø����ü �迭
*/
#include <stdio.h>

typedef struct 
{   
    char title[100];
    int published;
}Book;

typedef struct
{
    Book book[3]; // ����� ���� ���� 3�� ����ü �迭
}Bag;

int main(void)
{
    // ����� ���ÿ� �ʱ�ȭ
    Bag myBag = {
        {
            {"���� ���� ������ ���� �ϰڴ°�", 2018},
            {"Ÿ��ź�� ������", 2017},
            {"12���� �λ��� ��Ģ", 2018}
        }
    };

    for(int i = 0; i < 3; i++)
    {
        printf("å ����: %s \n�Ⱓ�� : %d��\n",
        myBag.book[i].title, myBag.book[i].published);
    }

    return 0;
}