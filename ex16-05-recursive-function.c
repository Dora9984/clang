/*
���ϸ�: ex16-05-recursive-function.c

����Լ�
    �ڱ� �ڽ��� ȣ���ϴ� �Լ�
    �ݺ��� ���

    ���� : ���� ���� �پ�� / ������ ���� �� �ִ�
    ���� : ���ø޸� �����÷ο� �߻� / ��� ���� �ڵ� ã�� ����!

*/

#include <stdio.h>
/*
main()
    sayHello()
        printf("Hello!\n");
        sayHello();
            printf("Hello!\n");
            sayHello();
                printf("Hello!\n");
                sayHello();
*/


void sayHello()
{
    printf("Hello!\n");
    sayHello();
}

int main(void)
{
    // ����Լ� ȣ��
    sayHello();
    return 0;
}