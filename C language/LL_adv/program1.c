#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while (Head != NULL)
    {
        printf("|%d|-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Summation(PNODE head)
{
    int iSum = 0;
    while (head != NULL)
    {
        iSum = iSum + (head->data);
        head = head->next;
    }
    return iSum;
}

int MaximumElement(PNODE head)
{
    if (head == NULL)
    {
        printf("LL is empty");
        return -1;
    }
    int iMax = head->data;
    head = head->next;
    while (head != NULL)
    {
        if (iMax < head->data)
        {
            iMax = head->data;
        }
        head = head->next;
    }
    return iMax;
}

int Frequency(PNODE head, int iNo)
{
    int iCnt = 0;
    while (head != NULL)
    {
        if (iNo == head->data)
        {
            iCnt++;
        }
        head = head->next;
    }
    return iCnt;
}

/* void DispPerfect(PNODE head)
{
    int iNo = 0, i = 0, iSum = 0;
    if (head == NULL)
    {
        return;
    }
    while (head != NULL)
    {
        iNo = head->data;
        iSum = 0;
        for (i = 1; i <= (iNo) / 2)
            ; i++)
        {
            for (iNo / i == 0)
            {
                iSum = iSum + i;
            }
            if (iSum == iNo)
            {
                printf("%d : %d", iNo, iSum);
            }
        }
        head = head->next;
    }
} */

void SumDigits(PNODE head)
{
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;
    while (head != NULL)
    {
        iSum = 0;
        iNo = head->data;
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d : %d\n", head->data, iSum);
        head = head->next;
    }
}

int SearchFirstOccurence(PNODE head, int iNo)
{
    if (head == NULL)
    {
        printf("LL is empty\n");
        return -1;
    }
    int iPos = 1;
    while (head != NULL)
    {
        if (head->data == iNo)
        {
            break;
        }

        iPos++;
        head = head->next;
    }

    if (head == NULL)
    {
        return -1;
    }
    else
        return iPos;
}

int searchLastOccurence(PNODE head, int iNo)
{
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 6);

    /* Display(First);
    iRet = Summation(First);
    printf("Addition is : %d\n", iRet);
    iRet = MaximumElement(First);
    printf("max : %d\n", iRet);

    iRet = Frequency(First, 41);
    printf("Freq : %d\n", iRet); */

    // DispPerfect(First);
    SumDigits(First);

    iRet = SearchFirstOccurence(First, 34);
    if (iRet == -1)
    {
        printf("there is no such element\n");
    }
    else
    {
        printf("%d\n", iRet);
    }
    return 0;
}
