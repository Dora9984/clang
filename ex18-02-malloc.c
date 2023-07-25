/*
���ϸ�: ex18-02-malloc.c

�޸� �����Ҵ�
    malloc �Լ�
        ����ڰ� ������ �Ҹ��� �ñ⸦ ������ �� �ִ� ��������

*/
#include <stdio.h>
#include <stdlib.h> // ���� �Ҵ� �Լ��� ����ϱ� ���� ������� ����

int main(void)
{
    // int�� 5����ŭ ������� �޸𸮰��� ����
    int* iptr = (int*)malloc(sizeof(int) * 5); 
    // double�� 3�� ��ŭ ��������
    double* dptr = (double*)malloc(sizeof(double) * 3); 

    for (int i = 0; i < 5; i++)
    {
        iptr[i] = 10 * (i+1);
    }
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", iptr[i]);
    }
    printf("\n");

    dptr[0] = 3.14; dptr[1] = 4.31; dptr[2] = 1.43;

    if(iptr != NULL) free(iptr); // �������� �Ҵ��� �޸� ����
    if(dptr != NULL) free(dptr); // �������� �Ҵ��� �޸� ����




    return 0;
}