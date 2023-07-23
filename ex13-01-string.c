/*
���ϸ�: ex13-01-string.c

���ڿ�
    C���� ���ڿ��� ū����ǥ(")�� �̿��ؼ� ǥ��
    ���ڿ��� ����(char)�� �̷���� �迭
    ���ڿ� ���� '\0'(num ����)�� ǥ��
*/

#include <stdio.h>

int main(void)
{
    char good[] = "Good!";
    char* bad = "Bad!";  // ���ͷ� �ּҰ� ����

    printf("1-1: %s\n", good);
    printf("1-2: %s\n", bad);
    printf("1-3: %p\n", good, bad);

    // �迭 ����� ���ڿ� ����
    good[0] = 'H'; // �� ���� ����
    // good = "New Good"; // �Ұ���

    // ������ ����� ���ڿ� ����
    // bad[0] = 'S'; // �� ���� �Ұ���
    bad = "New Bad"; // ����(���� ����Ǵ� �� �ƴ϶� ���ο� ���� �� ����Ǵ� ��)

    printf("2-1: %s\n", good);
    printf("2-2: %s\n", bad);
    printf("2-3: %p %p\n", good, bad);

    return 0;
}