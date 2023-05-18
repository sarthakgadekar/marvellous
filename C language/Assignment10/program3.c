#include <stdio.h>
#include <stdlib.h>

int retIndex(int Arr[], int iLength, int iNo)
{
    register int iCnt = 0;
    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if (iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iSize = 0;
    int iValue = 0;
    int iRet = 0;
    printf("enter no of elements\n");
    scanf("%d", &iSize);
    if(iSize<=0)
    {
        printf("unable to allocate space\n");
        return -1;
    } 
    printf("enter the number you want index of :\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    iRet = retIndex(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("there is no occurence of %d in the array\n", iValue);
    }
    else
    {
        printf("index of %d is %d\n", iValue, iRet);
    }
    free(ptr);
    return 0;
}