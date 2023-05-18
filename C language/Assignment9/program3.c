#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool chkEleven(int Arr[], int iLength)
{
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(iCnt==iLength)
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
    int *ptr = NULL;
    printf("enter array size\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    bool bRet = chkEleven(ptr, iSize);
    if (bRet == true)
    {
        printf("there is 11 in the array\n");
    }
    else
    {
        printf("there is no occurence of 11 in the array\n");
    }
    free(ptr);
    return 0;
}