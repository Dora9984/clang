/*
���ϸ�: ex20-03-nested-structure.c

��ø ����ü
    ��� ������ ����ü ���� ����
*/

typedef struct 
{
    char title[100];
    int publicshed;
}Book;

typedef struct 
{
    Book book;
}Bag;

int main(void)
{   
    // ����ü ������ ����� ���ÿ� �ʱ�ȭ
    // �̶� ��� ���� ���� ����� ���ÿ� �ʱ�ȭ
    Bag myBag = {
        {"���� ���� ������ ���� �ϰڴ°�", 2018}
    };

    // ��� �����ν��� ����ü ������ ������ ������ ��� �����ڴ� �����ϴ�.
    printf("å ����: %s \n�Ⱓ�⵵: %d��\n", myBag.book.title, myBag.book.publicshed);

    return 0;
}