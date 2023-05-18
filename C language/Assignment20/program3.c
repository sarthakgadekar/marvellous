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

int EvenElement_Sum(PNODE head)
{
    int iSum=0;
    while(head != NULL)
    {
        if(head->data % 2 == 0)
        {
            iSum=iSum+head->data;
        }
        head=head->next;
    }
    return iSum;
}

int main()
{
    PNODE first = NULL;
    insertLast(&first,10);
    insertLast(&first,20);
    insertLast(&first,10);
    insertLast(&first,100);
    int iRet=EvenElement_Sum(first);
    printf("%d\n",iRet);
    return 0;
}