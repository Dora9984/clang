/*
���ϸ�: ex13-04-gets-puts.c

gets() 
    ���ڿ� �Է�
puts()
    ���ڿ� ���

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    
    /*char ch[30];
    gets(ch);
    puts(ch);   // �ڵ� �ٹٲ� 
    printf("�� ���ڿ��� �����ٿ��� ��µ˴ϴ�.\n");
    */

   char ch[30];
   // ǥ�� �Է¿��� ���ڿ� �б�(����, ���� ũ��, stdin ǥ���Է� ��Ʈ��)
   fgets(ch, 30, stdin);

   fputs(ch, stdout);
   printf("�� ���ڿ��� �����ٿ��� ��µ˴ϴ�.\n");   


    return 0;
}