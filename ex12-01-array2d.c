/*
���ϸ�: ex12-01-array2d.c

2���� �迭

*/
#include <stdio.h>

int main(void)
{
    int i, j;
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("%d\n", arr[0][0]); // 0��° ���� 0��° ��
    printf("%d\n", arr[1][1]); // 1��° ���� 1��° ��

    // ��ü ����ϱ�
    for (i = 0; i < 2; i++) 
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // �迭�� ��� ���� ��� 10���� �����ϱ�
    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j] = 10;
        }
    }


    // ��ü ����ϱ�
    for (i = 0; i < 2; i++) 
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}