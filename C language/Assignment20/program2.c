// display all ements which are prime from singly LL
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

void displayPrime(PNODE head)
{
    int i = 0;
    while (head != NULL)
    {
        for (i = 2; i <= (head->data / 2); i++)
        {
            if ((head->data) % i == 0)
            {
                break;
            }
        }
        if (i > (head->data / 2))
        {
            printf("%d  ",head->data);
        }
        head=head->next;
    }
}
int main()
{
    PNODE first = NULL;
    insertLast(&first, 11);
    insertLast(&first, 20);
    insertLast(&first, 31);
    insertLast(&first, 41);
    insertLast(&first, 51);
    displayPrime(first);
    return 0;
}