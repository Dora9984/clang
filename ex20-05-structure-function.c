/*
���ϸ�: ex20-05-structure-function.c

����ü �Լ�
    ����ü ������ �Լ��� ���ڷ� ����,
    �� �Լ��κ��� ��Ȱ�� �� �ִ�.
*/

#include <stdio.h>

typedef struct
{
    int s_id;
    int age;
}Student;

// ���� �� �ʱ�ȭ�� ��ģ ����ü ������ ��ȯ�ϴ� �Լ�
Student setStudent(int s_id, int age)
{
    Student s = {s_id, age};
    return s;
}

void printStudent(Student s)
{
    printf("�й�: %d, ����: %d\n", s.s_id, s.age);
}

int main(void)
{
    Student s = setStudent(20230723, 20);   // ��ȯ�� ����ü ���� ����
    printStudent(s);    // ����ü ������ ���ڷ� ����

    return 0;
}