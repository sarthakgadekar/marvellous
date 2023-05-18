#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void insertLast(PPNODE head, int no)
{
    PNODE newnode = NULL;
    PNODE temp = NULL;

    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }

    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("|%d|-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
    printf("\n");
}

void AddOfDigits(PNODE head)
{
    int iSum = 0;
    int num = 0;
    int iDigit = 0;

    if (head == NULL)
    {
        printf("LL is empty\n");
    }

    while (head != NULL)
    {
        num = head->data;
        iSum = 0;

        while (num > 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        printf("  %d     ", iSum);

        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    insertLast(&first, 110);
    insertLast(&first, 230);
    insertLast(&first, 320);
    insertLast(&first, 220);
    Display(first);
    AddOfDigits(first);
    return 0;
}