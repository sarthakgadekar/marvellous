// DoublyLL
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL && *tail == NULL)
    {
        *head = newnode;
        *tail = newnode;
    }
    else
    {
        newnode->next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    }
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (*head == NULL && *tail == NULL)
    {
        *head = newnode;
        *tail = newnode;
    }
    else
    {
        (*tail)->next = newnode;
        newnode->prev = *tail;
        *tail = newnode;
    }
}

void DeleteFirst(PPNODE head,PPNODE tail)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty!!\n");
        return;
    }
    else if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
        *tail=NULL;
    }
    else
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head,PPNODE tail)
{
    if (*tail == NULL)
    {
        printf("LL is empty!!\n");
        return;
    }
    else if ((*tail)->prev == NULL)
    {
        free(*tail);
        *tail = NULL;
        *head=NULL;
    }
    else
    {
        *tail = (*tail)->prev;
        free((*tail)->next);
        (*tail)->next = NULL;
    }
}
int Count(PNODE head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int iCnt = 0;
    PNODE temp = NULL;
    int size = Count(*head);
    if (iPos < 0 || iPos > size + 1)
    {
        return;
    }
    if (iPos == 1)
    {
        InsertFirst(head, tail, no);
    }
    else if (iPos == size + 1)
    {
        InsertLast(head, tail, no);
    }
    else
    {
        struct node *newnode = (struct node *)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;
        temp = *head;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next->prev = newnode;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{
    int size=0;
    size=Count(*head);
    if(iPos<0 || iPos>size)
    {
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(head,tail);
    }
    if(iPos==size)
    {
        DeleteLast(head,tail);
    }
}
void Display(PNODE head)
{
    printf("FROM head to tail  ");
    while (head != NULL)
    {
        printf("|%d|<==>", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void DisplayRev(PNODE tail)
{
    printf("FROM tail to head  ");
    while (tail != NULL)
    {
        printf("|%d|<==>", tail->data);
        tail = tail->prev;
    }
    printf("NULL\n");
}
int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    InsertFirst(&first, &last, 11);
    InsertLast(&first, &last, 21);
    InsertLast(&first, &last, 51);
    InsertLast(&first, &last, 101);
    InsertAtPos(&first,&last,200,3);
    Display(first);
    DisplayRev(last);
    int iRet = Count(first);
    printf("%d\n", iRet);
    return 0;
}