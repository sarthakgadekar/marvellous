// DoublyCLL
// in singly circular and doubly circular
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

int Count(PNODE head)
{
    if (head == NULL)
    {
        return 0;
    }
    int cnt=0;
    PNODE temp = head;
    do
    {
        cnt++;
        temp=temp->next;

    } while (temp != head);

    return cnt;
}
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
    (*tail)->next = *head;
    (*head)->prev = *tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newnode = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
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
        newnode->prev = *tail;
        (*tail)->next = newnode;
        *tail = newnode;
    }

    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if (*head == NULL && *tail == NULL)
    {
        return;
    }

    else if ((*head)->next == *head)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }
    else
    {
        (*head) = (*head)->next;
        free((*head)->prev);
    }

    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if (*head == NULL && *tail == NULL)
    {
        return;
    }

    else if ((*head)->next == *head)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }
    else
    {
        (*tail) = (*tail)->prev;
        free((*tail)->next);
    }

    (*head)->prev = *tail;
    (*tail)->next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int iPos)
{
    int iCnt = 0;
    PNODE temp = NULL;
    int size = Count(*head);
    if (iPos < 0 || iPos > size + 1)
    {
        printf("Invalid Position\n");
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
    int iCnt = 0;
    PNODE temp = NULL;
    int size = Count(*head);
    if (iPos < 0 || iPos > size)
    {
        return;
    }
    if (iPos == 1)
    {
        DeleteFirst(head, tail);
    }
    else if (iPos == size)
    {
        DeleteLast(head, tail);
    }
    else
    {
        temp = *head;
        for (iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    
    }
}
void Display(PNODE head)
{
    if (head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    PNODE temp = head;
    do
    {
        printf("|%d|<==>", temp->data);
        temp = temp->next;

    } while (temp != head);
    printf("NULL\n");
}
int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet=Count(first);
    printf("count of nodes is %d\n",iRet);
    InsertFirst(&first, &last, 61);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 51);
    InsertLast(&first, &last, 621);
    InsertFirst(&first, &last, 11);
    InsertAtPos(&first, &last, 222,10);
    Display(first);
    return 0;
}