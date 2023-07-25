/*
���ϸ�: ex18-04-calloc-realloc.c

callock �Լ�
    �޸� ���������� �޸𸮰���ũ�� ���ڸ� �Ҵ�޴´�.
    malloc �Լ��� ������ ����

realloc �Լ�
    �� ������ �Ҵ�Ǿ� �ִ� �޸� ������ ũ�� ���� ����� ���� �Լ�

*/

#include <stdio.h>

int main(void)
{
    int* ptr; // �Ҵ�� �޸��� �ּҰ��� ������ ������
    int count = 0;  // ������ �Է¹��� ����
    int maxSize = 3; // �Ҵ���� �޸�ũ��
    int num;
    int i;

    ptr = (int*)calloc(maxSize, sizeof(int)); // malloc(sizeof(int) * maxSize);
    while(1)
    {
        printf("������ �Է��ϼ���(-1 �Է½� ����) : ");
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        // �Է��� ������ ������ �޸� ũ�⸸ŭ á�� ���
        if (count == maxSize)
        {
            maxSize += maxSize; // maxSize�� 3��ŭ Ȯ���Ŵ
            // ���Ҵ��� ���� �޸� ���� Ȯ�� 
            ptr = (int*)realloc(ptr, maxSize * sizeof(int));
        }

        /*
        num = 1
        count = 0
        ptr[0] = 1; ������ count = 1
        ptr[1] = 2; ������ count = 2
        ptr[2] = 3; ������ count = 3
        ���Ҵ�(realloc)
        ptr[3] = 4; ������ count = 4
        ptr[4] = 5; ������ count = 5
        ptr[5] = 6; ������ count = 6
        -1 �Է� ����

        
        */

        ptr[count++] = num;
        
    }

    for (i = 0; i < count; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    if(ptr != NULL) free(ptr);


    return 0;
}