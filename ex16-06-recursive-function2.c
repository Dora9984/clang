/*
���ϸ�: ex16-06-recursive-function2.c
*/

#include <stdio.h>
/*
main()
    sayHello(1)
        count = 1
        printf("Hello!\n");
        sayHello(2)
            count = 2
            printf("Hello!\n");
            sayHello(3)
                count = 3
                printf("Hello!\n");


*/


// count�� ���� ������ ���� �Ű�����
int sayHello(int count)
{
    printf("Hello!\n");

    // if (count != 3) {
    //     sayHello(count + 1);
    // }
    if (count == 3) 
    {
    return 0;
    }
    sayHello(count + 1);

}

int main(void)
{
    // ����Լ� ȣ��
    sayHello(1);

    return 0;
}