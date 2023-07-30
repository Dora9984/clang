/*
���ϸ�: ex20-06-structure-call-by-reference.c

����ü Call by reference ����
*/
#include <stdio.h>
typedef struct
{
    int xpos;
    int ypos;
}Point;

void setPosSameValue(Point* ptr)
{
    if(ptr->xpos > ptr->ypos)
    {
        ptr->ypos = ptr->xpos;
    }
    else 
    {
        ptr->xpos = ptr->ypos;
    }
}

void printPoint(Point point)
{
    printf("x: %d, y: %d\n", point.xpos, point.ypos);
}

int main(void)
{
    Point position1 = {66, 66};
    Point position2 = {6, 3};

    // �ּҰ� ����
    setPosSameValue(&position1);
    setPosSameValue(&position2);

    // �� ����Ʈ�� ���
    printPoint(position1);
    printPoint(position2);

    return 0;
}