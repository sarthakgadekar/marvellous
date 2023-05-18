// GFG LL sorted insert
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

void insertLast(PPNODE head, int iNo)
{
    PNODE newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = iNo;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }

    else
    {
        NODE *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void SortedInsert(PPNODE head, int iNo)
{
    PNODE newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = iNo;
    newnode->next = NULL;

    if (*head == NULL) // if LL is empty at first
    {
        *head = newnode;
    }

    else if (iNo < (*head)->data) // if data is smaller than head->data,insert at front
    {
        newnode->next = *head;
        *head = newnode;
    }

    else
    {
        NODE *temp = *head;
        /* In below while loop condition,if u don't understand,dry run it
            temp->next != null  ==> this condition is for last node
            LB notebook madhe dry run kel ahe */

        while (temp->next != NULL && temp->next->data < iNo)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void Reverse(PPNODE head)
{
    PNODE current=*head;
    PNODE prev=NULL;
    PNODE nextAddr=NULL;

    while(current != NULL)
    {
        nextAddr=current->next;
        current->next=prev;
        prev=current;
        current=nextAddr;
    }
    *head=prev;
}

void display(PNODE head)
{
    while (head != NULL)
    {
        printf("| %d | -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE first = NULL;
    SortedInsert(&first, 5);
    SortedInsert(&first, 6);
    SortedInsert(&first, 3);
    SortedInsert(&first, 3);
    SortedInsert(&first, 30);
    SortedInsert(&first, 4);
    SortedInsert(&first, 14);
    display(first);
    return 0;
}