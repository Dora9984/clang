// ���� ��� �����ϴ� ��ũ�� ����
#define _CRT_SECURE_NO_WARNINGS
// �ʿ��� ��� ���� ����
#include <stdio.h>
#include <string.h>

// ��� ����
#define MAX_LEN 10     // ���� �ִ� �߰� ���� ����
#define TRUE 1         // ���� ��Ÿ���� ���
#define FALSE 0        // ������ ��Ÿ���� ���

// �޴� ������ ���� ��� ����
#define ADD 1          // ���� �߰�
#define REMOVE 2       // ���� ����
#define CHECK 3        // ���� ���� Ȯ��
#define ORDER 4        // ���� ���� �ֹ�
#define END 5          // ���α׷� ����

// ���� ������ ���� ��� ����
#define AMERICANO 1    // �Ƹ޸�ī��
#define CAFELATTE 2    // ī���
#define JUICE 3        // �ֽ�
#define ICECREAM 4     // ���̽�ũ��
#define CANCEL 5       // ���� ���

// ���� ���� ��� ����
#define AMERICANO_PRICE 4000
#define CAFELATTE_PRICE 4500
#define JUICE_PRICE 5000
#define ICECREAM_PRICE 5500

// ���� ����Ʈ�� ���� ����ü ����
typedef struct
{
    char* foods[MAX_LEN];    // ���Ḧ �����ϴ� �迭
    int idxOfFoods;          // ���� �迭�� ���� �ε���
    int totalPrice;          // ������ ������ �� ����
} ItemList;

// ���� �޴� ��� �Լ�
void select()
{
    puts("====== WHAT DO YOU WANT ======");
    puts("1. ���� �߰�");
    puts("2. ���� ����");
    puts("3. ���� ���� Ȯ��");
    puts("4. ���� ���� �ֹ�");
    puts("5. ���α׷� ����");
}

// ���� �߰� �޴� ��� �Լ�
void showMenu()
{
    puts("====== ADD MENU ======");
    puts("1. �Ƹ޸�ī�� (4000)");
    puts("2. ī��� (4500)");
    puts("3. �ֽ� (5000)");
    puts("4. ���̽�ũ�� (5500)");
    puts("5. ���� ���");
}

// ���� ���� �޴� ��� �Լ�
void showRemoveMenu()
{
    puts("====== REMOVE MENU ======");
    puts("1. �Ƹ޸�ī�� (4000)");
    puts("2. ī��� (4500)");
    puts("3. �ֽ� (5000)");
    puts("4. ���̽�ũ�� (5500)");
    puts("5. ���� ���");
}

// ���� �߰� �Լ�
void addMenu(ItemList* itemlist)
{
    // �̹� ���� ������ �ִ� ���Ḧ ������ ��� ���� �޽��� ��� �� �Լ� ����
    if (itemlist->idxOfFoods >= MAX_LEN)
    {
        puts("�� �̻� �߰��� �� �����ϴ�!");
        return;
    }

    int choice; // ������� ������
    // ������ ���� ����
    showMenu(); // ���� �߰� �޴� ���
    printf("���� : "); 
    scanf("%d", &choice); // ����ڷκ��� �Է� ����
    switch (choice) // ������� ���ÿ� ���� ������ �۾� ����
    {
    case AMERICANO: // �Ƹ޸�ī�� ���� ��
        puts("�Ƹ޸�ī�� �߰�");
        itemlist->foods[(itemlist->idxOfFoods)++] = "�Ƹ޸�ī��"; // �Ƹ޸�ī�븦 ���� ����Ʈ�� �߰�
        itemlist->totalPrice += AMERICANO_PRICE; // �� ���ݿ� �Ƹ޸�ī�� ���� �߰�
        break;
    case CAFELATTE: // ī��� ���� ��
        puts("ī��� �߰�");
        itemlist->foods[(itemlist->idxOfFoods)++] = "ī���"; // ī��󶼸� ���� ����Ʈ�� �߰�
        itemlist->totalPrice += CAFELATTE_PRICE; // �� ���ݿ� ī��� ���� �߰�
        break;
    case JUICE: // �ֽ� ���� ��
        puts("�ֽ� �߰�");
        itemlist->foods[(itemlist->idxOfFoods)++] = "�ֽ�"; // �ֽ��� ���� ����Ʈ�� �߰�
        itemlist->totalPrice += JUICE_PRICE; // �� ���ݿ� �ֽ� ���� �߰�
        break;
    case ICECREAM: // ���̽�ũ�� ���� ��
        puts("���̽�ũ�� �߰�");
        itemlist->foods[(itemlist->idxOfFoods)++] = "���̽�ũ��"; // ���̽�ũ���� ���� ����Ʈ�� �߰�
        itemlist->totalPrice += ICECREAM_PRICE; // �� ���ݿ� ���̽�ũ�� ���� �߰�
        break;
    case CANCEL: // ��� ���� ��
        puts("���� ���");
        break;
    default: // �� �� �߸��� �Է� ��
        puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
        break;
    }
}

// ���� ���� �Լ�
int removeItem(ItemList* itemlist, char* itemToRemove)
{
    int i, rmIdx = -1; // ������ ������ �ε����� ������ ���� ���� �� �ʱ�ȭ
    for (i = 0; i < itemlist->idxOfFoods; i++) // ���� ����Ʈ�� ��ȸ
    {
        if (!strcmp(itemlist->foods[i], itemToRemove)) // ������ ���Ḧ ã���� ���
        {
            rmIdx = i; // ������ ������ �ε��� ����
            break;
        }
    }
    if (rmIdx >= 0) // ������ ���Ḧ ã���� ���
    {
        for (i = rmIdx; i < itemlist->idxOfFoods; i++) // ������ ���� ������ ������� �������� �̵�
        {
            itemlist->foods[i] = itemlist->foods[i + 1];
        }
        if (rmIdx == 0 && itemlist->idxOfFoods == 1)
        {
            itemlist->foods[0] = NULL; // ���� ����Ʈ�� ���ᰡ �ϳ��� �־��� ��� NULL�� ����
        }
        printf("%s �����߽��ϴ�\n", itemToRemove); // ���� �Ϸ� �޽��� ���
        return TRUE;
    }
    else
    {
        printf("������ ����� �����ϴ�!\n"); // ������ ���Ḧ ã�� ������ ��� �޽��� ���
        return FALSE;
    }
}

// ���� ���� �޴� ��� �� ���� �۾� ���� �Լ�
void removeMenu(ItemList* itemlist)
{

    if (itemlist->idxOfFoods <= 0) // ���� ����Ʈ�� ������� ���
    {
        puts("�� �̻� ������ �� �����ϴ�!"); // �޽��� ���
        return;
    }

    int choice;
    showRemoveMenu(); // ���� ���� �޴� ���
    printf("���� : ");
    scanf("%d", &choice); // ����ڷκ��� ���� �Է� ����
    switch (choice) // ������� ���ÿ� ���� ������ �۾� ����
    {
    case AMERICANO: // �Ƹ޸�ī�� ���� ��
        if (removeItem(itemlist, "�Ƹ޸�ī��")) // �Ƹ޸�ī�� ���� �õ�
        {
            itemlist->totalPrice -= AMERICANO_PRICE; // �� ���ݿ��� �Ƹ޸�ī�� ���� ����
            (itemlist->idxOfFoods)--; // ���� ����Ʈ���� �Ƹ޸�ī�� ����
        }
        break;
    case CAFELATTE: // ī��� ���� ��
        if (removeItem(itemlist, "ī���")) // ī��� ���� �õ�
        {
            itemlist->totalPrice -= CAFELATTE_PRICE; // �� ���ݿ��� ī��� ���� ����
            (itemlist->idxOfFoods)--; // ���� ����Ʈ���� ī��� ����
        }
        break;
    case JUICE: // �ֽ� ���� ��
        if (removeItem(itemlist, "�ֽ�")) // �ֽ� ���� �õ�
        {
            itemlist->totalPrice -= JUICE_PRICE; // �� ���ݿ��� �ֽ� ���� ����
            (itemlist->idxOfFoods)--; // ���� ����Ʈ���� �ֽ� ����
        }
        break;
    case ICECREAM: // ���̽�ũ�� ���� ��
        if (removeItem(itemlist, "���̽�ũ��")) // ���̽�ũ�� ���� �õ�
        {
            itemlist->totalPrice -= ICECREAM_PRICE; // �� ���ݿ��� ���̽�ũ�� ���� ����
            (itemlist->idxOfFoods)--; // ���� ����Ʈ���� ���̽�ũ�� ����
        }
        break;
    case CANCEL: // ���
        puts("���� ���"); // ����ڰ� ��Ҹ� �����ϸ� ��� �޽��� ���
        break;
    default:
        puts("�߸��� �Է��Դϴ�. ������ ����մϴ�."); // ��ȿ���� ���� ������ ��� �޽��� ���
        break;
    }
}

// ������ ����� �Ѿ��� ����ϴ� �Լ�
void checkMenu(ItemList* itemlist)
{
    int i = 0;
    printf("�ֹ� ǰ�� �Ѿ��� %d���Դϴ�! ǰ���� ������ �����ϴ�.\n ==> ", itemlist->totalPrice); // �Ѿװ� �޽��� ���
    for (i = 0; i < itemlist->idxOfFoods; i++) // ������ ��� ���� ���
    {
        printf("%s,", itemlist->foods[i]);
    }
    printf("\b "); // ������ ��ǥ ����
    printf(" \n");
}

// �ֹ��� ó���ϴ� �Լ�
int order(ItemList* itemlist)
{
    if (itemlist->idxOfFoods <= 0) // ������ ���ᰡ ���� ���
    {
        puts("�ƹ��͵� �������� �ʾ� �ֹ� �Ұ��մϴ�!"); // �޽��� ���
        return -1;
    }

    int choice;
    checkMenu(itemlist); // ������ ����� �Ѿ� ���
    puts("������ �ֹ��Ͻðھ��?"); // �ֹ� Ȯ�� �޽��� ���
    printf("yes (1) , no (2) : "); // ����ڿ��� �ֹ� Ȯ�� ���� ����
    scanf("%d", &choice); // ������� ���� �Է� ����

    if (choice == 1) // ����ڰ� 'yes'�� �����ϸ�
        return TRUE; // �� ��ȯ
    else // ����ڰ� 'no'�� �����ϸ�
        return FALSE; // ���� ��ȯ
}

// ���� �Լ�
int main(void)
{
    ItemList itemlist; // �ֹ� ������ ������ ����ü ����
    itemlist.idxOfFoods = 0; // ������ ���� ���� �ʱ�ȭ
    itemlist.totalPrice = 0; // �Ѿ� �ʱ�ȭ
    int choice;

    while (1) // ���� �ݺ�
    {
        select(); // ���� �޴� ���
        printf("���� : ");
        scanf("%d", &choice); // ����ڷκ��� ���� �Է� ����
        printf("\n\n");
        switch (choice) // ������� ���ÿ� ���� ������ �۾� ����
        {
        case ADD: // ���� �߰�
            addMenu(&itemlist);
            printf("\n\n");
            break;
        case REMOVE: // ���� ����
            removeMenu(&itemlist);
            printf("\n\n");
            break;
        case CHECK: // ������ ���� Ȯ��
            checkMenu(&itemlist);
            printf("\n\n");
            break;
        case ORDER: // �ֹ�
            if (order(&itemlist)) // �ֹ��� ���������� �̷������ ���
            {
                puts("�ֹ� �Ϸ�! ���α׷��� �����մϴ�."); // �ֹ� �Ϸ�
                // �ֹ� �Ϸ� �޽��� ����ϰ� ���α׷� ����
                return 0;
            }
            else
            {
                puts("�ֹ� ����!"); // �ֹ��� �����Ǿ����� �˸��� �޽��� ���
                printf("\n\n");
            }
            break;
        case END: // ���α׷� ����
            puts("���α׷��� �����մϴ�."); // ���α׷� ���� �޽��� ���
            return 0;
        default: // ��ȿ���� ���� ������ ��� �޽��� ����ϰ� ���α׷� ����
            puts("�߸��� �Է��Դϴ�. ������ ����մϴ�.");
            return 0;
        }
    }

    return 0;
}