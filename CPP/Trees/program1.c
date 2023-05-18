#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} NODE, *PNODE, **PPNODE;

void Insert(PPNODE head, int iNo)
{
    PNODE temp = *head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (*head == NULL) // if bst is empty
    {
        *head = newn;
    }

    else
    {
        while (1)
        {
            if (iNo > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }

            else if (iNo == temp->data)
            {
                free(newn);
                printf("data is the in bst");
                break;
            }
        }
    }
}

void Inorder(PNODE head)
{
    if (head != NULL)
    {
        Inorder(head->lchild);
        printf("%d ", head->data);
        Inorder(head->rchild);
    }
}

void Preorder(PNODE head)
{
    if (head != NULL)
    {
        printf("%d ", head->data);
        Inorder(head->lchild);
        Inorder(head->rchild);
    }
}

void Postorder(PNODE head)
{
    if (head != NULL)
    {
        Inorder(head->lchild);
        Inorder(head->rchild);
        printf("%d ", head->data);
    }
}
int main()
{
    PNODE first = NULL;
    Insert(&first, 11);
    Insert(&first, 21);
    Insert(&first, 7);

    Inorder(first);
    Preorder(first);
    return 0;
}