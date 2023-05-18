// SinglyCLL
// in singly circular, doubly circular,doubly linear we take two pointers head and tail
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
void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;

    if (*head == NULL && *tail == NULL)
    {
        *head = newnode;
        *tail = newnode;
    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    struct node *newnode = NULL;
    newnode = (struct node *)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        *tail = newnode;
    }
    else
    {
        (*tail)->next = newnode;
        *tail = newnode;
    }
    (*tail)->next = *head;
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    temp = *head;
    (*head) = (*head)->next;
    free(temp);
    (*tail)->next = *head;
}

void DeleteLast(PPNODE head,PPNODE tail)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else
    {
        temp=*head;
        while(temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
        *tail=temp;
    }
    (*tail)->next=*head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    struct node *newnode = NULL;
    int size = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    size = Count(*head);
    if (iPos < 1 || iPos > size + 1)
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
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = no;
        newnode->next = NULL;
        temp = *head;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void DeleteAtPos(PPNODE head, PPNODE tail, int iPos)
{
    int size = Count(*head);
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE tempNode = NULL;
    if (iPos < 1 || iPos > size)
    {
        printf("INVALID position!!\n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst(head, tail);
    }

    else if (iPos == size)
    {
        DeleteLast(head,tail);
    }

    else
    {
        temp = *head;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        tempNode = temp->next;
        temp->next = temp->next->next;
        free(tempNode);
    }
}
void Display(PNODE head)
{
    PNODE temp = head;
    do
    {
        printf("|%d|->", temp->data);
        temp = temp->next;

    } while (temp != head);

    printf("NULL\n");
}
int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    InsertFirst(&first, &last, 11);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 101);
    Display(first);
    return 0;
}