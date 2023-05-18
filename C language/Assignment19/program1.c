// search first occurence and return index
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

void Display(PNODE head)
{
    while (head != NULL)
    {
        printf("|%d|--> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int FirstOccurence(PNODE head, int iNo)
{
    int size = Count(head);
    int iCnt=1;
    while(iCnt<=size)
    {
        if(head->data==iNo)
        {
            break;
        }
        head=head->next;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    PNODE first = NULL;
    insertFirst(&first, 14);
    insertFirst(&first, 12);
    insertFirst(&first, 11);
    insertFirst(&first, 13);
    int iRet = FirstOccurence(first, 14);
    printf("%d\n", iRet);
    return 0;
}