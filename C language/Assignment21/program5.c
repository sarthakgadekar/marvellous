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

void LargestDigit(PNODE head)
{
    int temp = 0;
    int iDigit = 0;
    int large = 0;
    while (head != NULL)
    {
        temp = head->data;
        iDigit = 0;
        large = head->data % 10;
        while (temp > 0)
        {
            iDigit = temp % 10;
            if (iDigit > large)
            {
                large = iDigit;
            }
            temp = temp / 10;
        }
        printf("%d ", large);
        head = head->next;
    }
}

int main()
{
    PNODE first = NULL;
    insertLast(&first, 89);
    insertLast(&first, 363);
    insertLast(&first, 982);
    insertLast(&first, 291);
    LargestDigit(first);
    return 0;
}