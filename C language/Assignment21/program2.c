// DisplayPalindrome
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

void DisplayPalindrome(PNODE head)
{
    int temp = 0;
    int rev = 0;
    int iDigit = 0;

    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        iDigit = 0;
        rev = 0;
        temp = head->data;
        while (temp > 0)
        {
            iDigit = temp % 10;
            rev = rev * 10 + iDigit;
            temp = temp / 10;
        }
        if (rev == head->data)                  //you can't write temp in the place of head->data,because temp is zero after while loop
        {
            printf("%d  ", rev);
        }
        head = head->next;
    }
}

void display(PNODE head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main()
{
    PNODE first = NULL;
    insertLast(&first, 111);
    insertLast(&first, 12);
    insertLast(&first, 13);
    insertLast(&first, 14);
    DisplayPalindrome(first);
    return 0;
}