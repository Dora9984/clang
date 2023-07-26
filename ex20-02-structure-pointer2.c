/*
���ϸ�: ex20-02-structure-pointer2.c

ȭ��ǥ������ (arrow operator)
    -> : ������ ����ϴ� ����ü�� ����� �����ϱ� ���� ���
*/

#include <stdio.h>

typedef struct 
{
    int x; int y;
}Point;

typedef struct 
{
    Point* start;   // ����ü �����ͺ��� start
    Point* end;     // ����ü �����ͺ��� end
}Line;

int main(void)
{
    Point p1 = {10, 8};
    Point p2 = {20, 40};

    Line line = {&p1, &p2};

    printf("���� ������: [%d %d]\n", line.start->x, line.start->y);
    printf("���� ����: [%d %d]\n", line.end->x, line.end->y);

    printf("���� ������: [%d %d]\n", (*line.start).x, (*line.start).y);
    printf("���� ����: [%d %d]\n", (*line.end).x, (*line.end).y);

    return 0;
}