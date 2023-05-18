#include <stdio.h>
#include <stdlib.h>
int freqCounter(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iCount = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *ptr = NULL;
    printf("enter size of an array\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("there is no allocated\n");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    int iRet = freqCounter(ptr, iSize);
    printf("frequency of even numbers in array is %d", iRet);
    free(ptr);
    return 0;
}