#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct node
{
    int data;
    struct node* next;
};
int main()
{
    //static memory allocation
    struct node obj;
    
    // dynamic memory allocation
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    
    //direct accesing operator(.)
    obj.data=11;
    obj.next=NULL;

    //Indirect accesing operator(->)
    ptr->data=11;
    ptr->next=NULL;
    
    return 0;
}