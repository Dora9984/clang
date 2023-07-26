/*
���ϸ�: ex20-01-structure-pointer.c

����ü �����ͺ���
    ����ü�� �����ͺ����� ����

ȭ��ǥ������ (->)
    ������ ����Ͽ� ����ü ����� ����
*/
#include <stdio.h>

typedef struct
{
    char name[30];
    int age;
}Person;

int main(void)
{
    Person boy = {"�����", 32};
    Person* ptr = &boy;

    printf("%s (%d)\n", (*ptr).name, (*ptr).age);
    printf("%s (%d)\n", ptr->name, ptr->age);

    return 0;
}