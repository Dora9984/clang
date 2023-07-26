/*
���ϸ�: ex19-01-structure.c

����ü(Structure)
    �ϳ� �̻��� ������ �Ѳ����� ��� ����� ���ο� ������ �ڷ���
    ����� ���� �ڷ����̶�� �θ��⵵ �Ѵ�.
*/

#include <stdio.h>
#include <string.h>

struct person // ����ü�� �ٸ� Ÿ���� ������ ���� �� ���� 
{
    char name[30];
    int age;
};

int main(void)
{
    struct person boy, girl;

    // name ��� ������ ���� ����
    strcpy(boy.name, "��ҳ�"); // ���� �迭�� ��������
    strcpy(girl.name, "�̼ҳ�");

    // age ��� ������ ���� ����
    boy.age = 12;
    girl.age = 9;
    printf("�ҳ��� �̸��� %s ���̴� %d��\n", boy.name, boy.age);
    printf("�ҳ��� �̸��� %s ���̴� %d��\n", girl.name, girl.age);

    return 0;
}