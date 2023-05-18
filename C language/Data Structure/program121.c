
/*
        double slash * is the difference between singly and doubly code
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev; // *
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE head)
{
    printf("data from linked list\n");
    while (head != NULL)
    {
        printf("|%d| <-=-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while (head != NULL)
    {
        iCnt++;
        head = head->next;
    }
    return iCnt;
}

void InsertAtFirst(PPNODE head, int no)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL; // *

    if (*head != NULL) // if LL is empty
    {
        newnode->next = *head;
        (*head)->prev = newnode;
    }
    *head = newnode;
}


void InsertLast(PPNODE head, int no)
{
    PNODE newnode = NULL;
    PNODE temp = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;
    newnode->prev = NULL; // *

    if (*head == NULL) // if LL is empty
    {
        *head = newnode;
    }

    else // if LL contains at least one node
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp; // *
    }
}

void DeleteFirst(PPNODE head)
{
    if ((*head) == NULL) // empty LL
    {
        return;
    }
    else if ((*head)->next == NULL) // single node
    {
        free(*head);
        *head = NULL;
    }

    else // more than one node
    {
        *head = (*head)->next; // *

        free((*head)->prev); // *           there is no need of temporary pointer here in Doubly LL unlike singly LL

        (*head)->prev = NULL; //*       important to do NULL here when you change your first node
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if ((*head) == NULL)
    {
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

void InsertAtPos(PPNODE head, int no, int pos)
{
    int size = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    PNODE newnode = NULL;
    size = Count(*head);

    if ((pos < 1) || (pos > size + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1)
    {
        InsertAtFirst(head, no);
    }

    else if (pos == size + 1)
    {
        InsertLast(head, no);
    }
    else
    {
        newnode = (PNODE)malloc(sizeof(PNODE));
        newnode->data = no;
        newnode->next = NULL;
        newnode->prev = NULL;

        temp = *head;
        for (iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next; //*
        temp->next->prev = newnode; //*
        newnode->prev = temp;       //*
        temp->next = newnode;       //*
    }
}

void DeleteAtPos(PPNODE head, int pos)
{
    int size = 0;
    int iCnt = 0;
    PNODE temp = NULL;
    size = Count(*head);

    if ((pos < 1) || (pos > size))
    {
        printf("Invalid position\n");
        return;
    }

    if (pos == 1)
    {
        DeleteFirst(head);
    }

    else if (pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;
        for (iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;
    }
}
int main()
{
    PNODE first = NULL;
    InsertAtFirst(&first, 11);
    InsertAtFirst(&first, 21);
    InsertAtFirst(&first, 51);
    InsertAtFirst(&first, 101);
    InsertAtPos(&first,123,3);
    DeleteAtPos(&first,3);
    Display(first);

    /* DeleteFirst(&first);
    Display(first);
    DeleteFirst(&first);
    DeleteLast(&first);
    Display(first);
    DeleteFirst(&first);
    Display(first); */

    /* InsertLast(&first,111);
    Display(first);
   int iRet= Count(first);
   printf("%d \n",iRet); */
    return 0;
}