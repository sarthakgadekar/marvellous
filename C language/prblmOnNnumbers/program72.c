#include <stdio.h>
#include <stdlib.h>

int sumArray(int arr[], int iLength)
{
    int iCnt = 0;
    int ArrSum = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        ArrSum = ArrSum + arr[iCnt];
    }
    return ArrSum;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet=0;
    printf("enter size of an array\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter elements to the array\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    iRet = sumArray(ptr, iSize);
    printf("Summation is %d", iRet);
    free(ptr);
    return 0;
}