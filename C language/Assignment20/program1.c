// perfect number in linked list
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


void dispPerfNum(PNODE head)
{
    int i=0;
    int sum_Of_Fact=0;
    while(head != NULL)
    {
        sum_Of_Fact=0;

        for(i=1;i<=(head->data)/2;i++)
        {
            if(head->data % i==0)
            {
                sum_Of_Fact=sum_Of_Fact+i;
            }
            
            if(sum_Of_Fact > head->data)
            {
                break;
            }
        }
        if(sum_Of_Fact==head->data)
        {
            printf("%d ",sum_Of_Fact);
        }
        head=head->next;
    }
}
int main()
{
    PNODE first = NULL;
    insertLast(&first, 11);
    insertLast(&first, 28);
    insertLast(&first, 17);
    insertLast(&first, 41);
    insertLast(&first, 6);
    insertLast(&first, 89);
    dispPerfNum(first);

    return 0;
}