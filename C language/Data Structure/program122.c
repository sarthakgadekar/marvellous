// Practice of singly linear LL all functions in one go
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

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("|%d|--> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    if (head == NULL)
    {
        return 0;
    }
    else if (head->next == NULL)
    {
        return 1;
    }
    else
    {
        while (head != NULL)
        {
            iCnt++;
            head = head->next;
        }
        return iCnt;
    }
}
void insertFirst(PPNODE head, int no)
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
void deleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("linked list is empty,so cannot delete node\n");
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
        *head = (*head)->next;
        free(temp);
    }
}

void deleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("there is no node to delete\n");
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
    size = Count(*head);
    PNODE newnode = NULL;
    PNODE temp = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = no;
    newnode->next = NULL;

    if (pos < 1 || pos > size + 1) // filter
    {
        printf("invalid position\n");
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
        temp->next = newnode;
    }
}
void deleteAtPos(PPNODE head, int pos)
{
    int size = 0, iCnt = 0;
    PNODE temp=NULL;
    PNODE nodeToDelete=NULL;
    size = Count(*head);
    if (pos < 1 || pos > size || *head==NULL)
    {
        printf("INVALID position or there is no node in LL\n");
        return;
    }

    if(pos==1)
    {
        deleteFirst(head);
    }
    else if(pos==size)
    {
        deleteLast(head);
    }
    else
    {
        temp=*head;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        nodeToDelete=temp->next;
        temp->next=temp->next->next;
        free(nodeToDelete);
    }

}

int main()
{
    PNODE first = NULL;
    insertFirst(&first, 11);
    insertFirst(&first, 21);
    insertFirst(&first, 31);
    insertFirst(&first, 41);
    deleteFirst(&first);
    insertLast(&first, 41);
    insertLast(&first, 51);
    insertLast(&first, 61);
    insertLast(&first, 71);
    deleteLast(&first);
    insertAtPos(&first, 71, 3);
    deleteAtPos(&first, 3);
    int iRet = Count(first);
    printf("%d\n", iRet);
    Display(first);
    return 0;
}