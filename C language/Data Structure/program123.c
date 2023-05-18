// doubly linear linked list practice in one go

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

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("|%d|->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while (head != NULL)
    {
        head = head->next;
        iCnt++;
    }
    return iCnt;
}

void insertFirst(PPNODE head, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;

    /* if (*head == NULL)               LOGIC 1
    {
        *head = newnode;
    }
    else
    {
        newnode->next = *head;
        (*head)->prev = newnode;
        *head = newnode;
    } */

    if (*head != NULL)
    {
        newnode->next = *head;
        (*head)->prev = newnode;
    }
    *head = newnode;
}

void insertLast(PPNODE head, int no)
{
    PNODE newnode = NULL;
    PNODE temp = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;

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
        newnode->prev = temp;
    }
}

void deleteFirst(PPNODE head)
{
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }
    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        *head = (*head)->next;
        free((*head)->prev);
        (*head)->prev = NULL;
    }
}

void deleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("LL is empty\n");
        return;
    }

    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
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

void insertAtPos(PPNODE head, int no, int pos)
{
    int size = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE newnode = NULL;

    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL;

    size = Count(*head);

    if (pos < 1 || pos > size + 1)
    {
        printf("INVALID position\n");
        return;
    }
    if (pos == 1)
    {
        insertFirst(head, no);
    }
    else if (pos == size + 1)
    {
        insertLast(head, no);
    }
    else
    {
        temp = *head;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void deleteAtPos(PPNODE head, int pos)
{
    int size = 0, iCnt = 0;
    PNODE temp = NULL;
    size = Count(*head);
    if (pos < 1 || pos > size)
    {
        printf("INVALID position\n");
        return;
    }
    if (pos == 1)
    {
        deleteFirst(head);
    }
    else if (pos == size)
    {
        deleteLast(head);
    }
    else
    {
        temp = *head;
        for (iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE first = NULL;
    insertFirst(&first, 11);
    insertFirst(&first, 12);
    insertFirst(&first, 13);
    insertLast(&first, 56);
    insertFirst(&first, 13);
    deleteFirst(&first);
    deleteFirst(&first);
    deleteFirst(&first);
    deleteFirst(&first);
    Display(first);
    return 0;
}