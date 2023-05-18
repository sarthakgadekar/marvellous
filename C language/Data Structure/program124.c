// takeInput function

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

PNODE takeInputFromUser()
{
    int no = 0;
    printf("enter LL data \n");
    scanf("%d", &no);
    PNODE head=NULL;
    PNODE tail = NULL;

    while (no != -1)
    {
        PNODE newnode =NULL;
        newnode=(PNODE)malloc(sizeof(NODE));
        newnode->data = no;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        scanf("%d", &no);
    }
    return head;
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head=NULL;
    head=takeInputFromUser();
    Display(head);
    return 0;
}