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

void SmallestDigit(PNODE head)
{
    int temp = 0;
    int iDigit = 0;
    int small = 0;
    while (head != NULL)
    {
        temp = head->data;
        iDigit = 0;
        small = head->data % 10;
        while (temp > 0)
        {
            iDigit = temp % 10;
            if (iDigit < small)
            {
                small = iDigit;
            }
            temp = temp / 10;
        }
        printf("%d ", small);
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    insertLast(&first, 89);
    insertLast(&first, 323);
    insertLast(&first, 982);
    insertLast(&first, 263);
    SmallestDigit(first);
    return 0;
}