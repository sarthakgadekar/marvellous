#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newnode=NULL;
    newnode=(PNODE)malloc(sizeof(NODE));
    newnode->data=no;
    newnode->next=NULL;

    if(*Head==NULL)   //if LL is empty
    {
        *Head=newnode;
    }
    else                //if LL contain atleast one node
    {
        newnode->next=*Head;
        *Head=newnode;
    }
}

int main()
{
    PNODE first=NULL;
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    return 0;
}




/* 
RULES:
    use only dynamic memory allocation
    don't write any technical allocation in main
    don't use any global variables
    be careful while manipulating the first pointer
    pass the first pointer directly if the function is not going to modify
    pass the address of first pointer if the function is going to modify

 */