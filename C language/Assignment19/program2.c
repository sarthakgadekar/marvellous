// search last occurence and return index
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
    if (*head != NULL)
    {
        newnode->next = *head;
    }
    *head = newnode;
}

void display(PNODE head)
{
    if (head == NULL)
    {
        printf("there is no node to display\n");
        return;
    }
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
        head = head->next;
        iCnt++;
    }
    return iCnt;
}

int searchLastOccur(PNODE head, int iNo)
{
    int size = Count(head);
    int iCnt=0;
    int index=-1;
    for(iCnt=1;iCnt<=size;iCnt++)
    {
        if(head->data==iNo)
        {
            index=iCnt;
        }
        head=head->next;
        if(head==NULL)
        {
            break;
        }
    }
    return index;
}
int main()
{
    PNODE first = NULL;
    insertFirst(&first, 10);
    insertFirst(&first, 20);
    insertFirst(&first, 30);
    insertFirst(&first, 10);
    insertFirst(&first, 50);
    insertFirst(&first, 30);
    insertFirst(&first, 50);
    int iRet=searchLastOccur(first,10);
    printf("%d\n",iRet);
    return 0;
}