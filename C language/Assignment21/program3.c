// multiplication of digits
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

void multipliDigit(PNODE head)
{
    int temp = 0;
    int rev = 0;
    int iDigit = 0;

    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        iDigit = 0;
        int iMult = 1;
        while (head->data > 0)
        {
            iDigit = head->data % 10;
            if (iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            head->data = (head->data) / 10;
        }
        printf("%d  ", iMult);
        head = head->next;
    }
}

void display(PNODE head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main()
{
    PNODE first = NULL;
    insertLast(&first, 650);
    insertLast(&first, 122);
    insertLast(&first, 130);
    insertLast(&first, 240);
    multipliDigit(first);
    return 0;
}