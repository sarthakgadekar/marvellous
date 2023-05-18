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

int SecMaximum(PNODE head)
{
    int Firstmax = 0;
    int SecMax=0;
    PNODE temp=NULL;
    if (head == NULL)
    {
        printf("LL is empty\n");
        return -1;
    }
    if (head->next == NULL)
    {
        printf("there is only one element\n");
        return -1;
    }

    else
    {
        temp=head;
        Firstmax = temp->data;
        temp = temp->next;
        while (temp != NULL)
        {
            if (temp->data > Firstmax)
            {
                Firstmax = temp->data;
            }
            temp = temp->next;
        }

         temp=head;
         while (temp != NULL)
        {
            if (temp->data > SecMax && temp->data != Firstmax)
            {
                SecMax = temp->data;
            }
            temp = temp->next;
        }
        return SecMax;

    }
}

int main()
{
    PNODE first = NULL;
    insertLast(&first, 110);
    insertLast(&first, 230);
    insertLast(&first, 320);
    insertLast(&first, 220);
    int iRet = SecMaximum(first);
    printf("%d\n", iRet);
    return 0;
}