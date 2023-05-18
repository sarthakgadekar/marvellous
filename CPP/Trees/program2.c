#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool Search(PNODE head, int iNo)
{

    while (head != NULL)
    {
        if (head->data == iNo)
        {
            break;
        }

        else if (iNo > head->data)
        {
            head = head->rchild;
        }

        else if (iNo < head->data)
        {
            head = head->lchild;
        }
    }
    if (head == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int CountLeafNode(PNODE head)
{
    static int iCnt=0;
    if(head != NULL)
    {
        if((head->lchild==NULL) && (head->rchild==NULL))
        {
            iCnt++;
        }
        CountLeafNode(head->lchild);
        CountLeafNode(head->rchild);
    }
    return iCnt;
}

int main()
{
    PNODE first = NULL;
    Insert(&first, 11);
    Insert(&first, 9);
    Insert(&first, 21);
    Insert(&first, 18);
    Insert(&first, 27);

    Inorder(first);
    bool bRet = Search(first, 12);
    if (bRet == true)
    {
        printf("element is there\n");
    }

    else
    {
        printf("element is not there\n");
    }

    int iRet=CountLeafNode(first);
    printf("%d ",iRet);
    return 0;
}