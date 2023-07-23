/*
���ϸ�: ex13-03-eof.c

EOF(End Of File)
    EOF�� C���α׷����� ���� ���� ��Ÿ���� ���
    EOF�� int������ ���ǵǾ� ������, -1�� ����
    �Ҵ�Ǿ� �ִ�.

EOF �Է¹��:
    �Է� ��Ʈ��(�͹̳�)����
        Ctrl + Z(Windows)
        Ctrl + D(Unix, Linux, macOS)

*/
#include <stdio.h>

int main(void)
{
    int ch;
    while(1)
    {
        ch = getchar();
        if (ch == EOF)
            break;
        
        putchar(ch);
    }

    return 0;
}