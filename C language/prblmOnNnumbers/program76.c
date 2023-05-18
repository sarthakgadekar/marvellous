#include <stdio.h>
#include <stdlib.h>

int CntOccurence(int Arr[], int iLength, int No)
{
    int iFreq = 0; 
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int number = 0;
    printf("enter no of elements you want in array\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("enter the count of number you want in array\n");
    scanf("%d", &number);
    int iRet = CntOccurence(ptr, iSize, number);
    printf("count of given number in an array is %d", iRet);
    free(ptr);
    return 0;
}