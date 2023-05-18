#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int countEven = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            countEven++;
        }
    }
    return countEven;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    printf("enter number of elements\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter the values of array\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    int iRet=CountEven(ptr, iSize);
    printf("number of even elements are %d",iRet);
    free(ptr);
    return 0;
}