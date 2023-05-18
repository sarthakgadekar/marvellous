#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool chkNumber(int Arr[], int iLength, int iNo)
{
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if (iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
    int *ptr = NULL;
    printf("enter the no of elements\n");
    scanf("%d", &iSize);
    if(iSize<=0)
    {
        printf("unable to allocate space\n");
        return -1;
    }
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter the number you want to check in the array\n");
    scanf("%d", &iValue);
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    bool bRet = chkNumber(ptr, iSize, iValue);
    if (bRet == true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("number is not present\n");
    }
    return 0;
}