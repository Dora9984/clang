/*
���ϸ�: ex16-01-fucntion-array.c

�迭�� ���޹޴� �Լ�
    �迭�� �̸��� �����ϴ� ���� �����͸� �����ϴ� ������
    �Ű� ������ ������ ������ ����� �ȴ�.
*/
#include <stdio.h>

int readArray(int* arr, int length) // int* arr = 005ffe90 int length = 3
{
    int i;
    printf("�迭�� ��� �о��: [ ");
    for (i = 0; i < length; i++)
    {
        printf("%d", arr[i]);
        if (i + 1 < length)
        {
            printf(", ");
        }
        else 
        {
            printf(" ");
        }
    }
    printf("]\n");

}

int main(void)
{
    int arr[3] = { 3, 6, 9 };

    printf("arr �ּҰ�: %p\n", arr);

    int length = 3;
    readArray(arr, length); // �迭�� �̸� arr�� ������ ������ ����

    return 0;
}