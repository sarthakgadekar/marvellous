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

void insertFirst(PPNODE head, int iNo)
{
    PNODE newnode = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = iNo;
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

void insertLast(PPNODE head, int iNo) // travel till last noode of LL
{
    PNODE newnode = NULL;
    PNODE temp = NULL;
    newnode = (PNODE)malloc(sizeof(NODE));
    newnode->data = iNo;
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

void takeInputFromUser(PPNODE head)
{
    int no = 0;
    printf("enter LL data \n");
    scanf("%d", &no);
    *head=NULL;
    PNODE tail = NULL;

    while (no != -1)
    {
        PNODE newnode =NULL;
        newnode=(PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = newnode;
            tail = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        scanf("%d", &no);
    }
}
void Reverse(PPNODE head)           //dry run this with diagram if u don't get it
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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;
    if (*head == NULL)
    {
        printf("there is no node\n");
        return;
    }
    else
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}
void DeleteLast(PPNODE head)
{
    /* If LL is empty then return
       If LL contains at least one node,then delete that node and return
       If LL contains more than one nodes,then travel till second last node and delete last node

    */

    PNODE temp = NULL;

    if (*head == NULL)
    {
        return;
    }

    else if ((*head)->next == NULL)
    {
        free(*head);
        *head = NULL; // important statement
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
    // if position is invalid then return directly (position < 1 or position > size+1)
    // if position is 1 then call insertFirst
    // if position is N+1 then call insertLast

    int size = 0, iCnt = 0;
    PNODE newnode = NULL;
    PNODE temp = NULL;
    size = Count(*head);

    if ((pos < 1) || (pos > (size + 1)))
    {
        printf("position is invalid\n");
        return;
    }

    if (pos == 1)
    {
        insertFirst(head, no);
    }
    else if (pos == (size + 1))
    {
        insertLast(head, no);
    }

    else // actual logic of this function....insert at position
    {
        newnode = NULL;
        newnode = (PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;

        temp = *head;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void DeleteAtPosition(PPNODE head, int pos)
{
    // if position is invalid then return directly (position < 1 or position > size)
    // if position is 1 then call deleteFirst
    // if position is N then call deleteLast

    int size = 0, iCnt = 0;
    PNODE temp = NULL, tempdelete = NULL;
    size = Count(*head);

    if ((pos < 1) || (pos > size))
    {
        printf("position is invalid\n");
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

    else // actual logic of this function....delete at position
    {
        temp = *head;
        for (iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }
        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }
}

int main()
{
    PNODE first = NULL;
    /* insertFirst(&first, 10);
    insertFirst(&first, 20);
    insertFirst(&first, 30);
    insertFirst(&first, 40);
    insertFirst(&first, 50);
    display(first);
    InsertAtPos(&first, 75, 3);
    DeleteAtPosition(&first, 3); */

    takeInputFromUser(&first);

    display(first);
    Reverse(&first);
    display(first);

    /* int iRet = Count(first);
    printf("%d ", iRet);
    printf("\n");

    insertFirst(&first, 1);
    display(first);

    iRet = Count(first);
    printf("%d ", iRet);

    printf("\n");

    insertLast(&first, 501);
    insertLast(&first, 601);
    display(first);

    DeleteFirst(&first);
    display(first);

    DeleteFirst(&first);
    display(first);

    DeleteLast(&first);
    display(first); */
    return 0;
}