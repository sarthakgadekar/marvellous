// SinglyLL
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

void InsertFirst(PPNODE head, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE temp = NULL;
    struct node *newnode = NULL;
    newnode = (struct node *)malloc(sizeof(NODE));
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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else
    {
        temp = *head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int iPos)
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
        InsertFirst(head, no);
    }
    else if (iPos == size + 1)
    {
        InsertLast(head, no);
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

void DeleteAtPos(PPNODE head, int iPos)
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
        DeleteFirst(head);
    }

    else if (iPos == size)
    {
        DeleteLast(head);
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
    while (head != NULL)
    {
        printf("|%d|->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE first = NULL;
    InsertFirst(&first, 11);
    InsertFirst(&first, 21);
    InsertFirst(&first, 101);
    InsertFirst(&first, 112);
    InsertAtPos(&first, 25, 2);
    DeleteAtPos(&first,2);
    Display(first);
    return 0;
}