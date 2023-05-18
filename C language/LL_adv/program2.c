#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while (Head != NULL)
    {
        printf("|%d|-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int miD_element(PNODE head) // basic approach
{
    int iSize = 0;
    PNODE temp = head;

    if (head == NULL)
    {
        return iSize;
    }
    while (head != NULL)
    {
        iSize++;
        head = head->next;
    }
    head = temp;
    for (int i = 1; i <= iSize / 2; i++)
    {
        head = head->next;
    }

    return head->data;
}

int MidElement(PNODE head) // two pointer approach
{
    PNODE fast = head;
    PNODE slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

void Reverse(PPNODE head) // reverse in place
{
    PNODE curr = *head;
    PNODE prev = NULL;
    PNODE nexAddr = NULL;
    while (curr != NULL)
    {
        nexAddr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nexAddr;
    }
    *head = prev;
}

bool chkLoop(PNODE head)
{
    PNODE fast = head;
    PNODE slow = head;
    bool flag = false;

    while ((fast != NULL) && (fast->next != NULL))
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    PNODE third = NULL;
    PNODE last = NULL;
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 20);
    /* iRet = MidElement(First);
    printf("%d", iRet);

    Reverse(&First); */

    bool bRet = chkLoop(First);
    if (bRet == true)
    {
        printf("there is a loop\n");
    }
    else
    {
        printf("there is no loop\n");
    }

    return 0;
}