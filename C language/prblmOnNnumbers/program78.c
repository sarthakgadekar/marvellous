#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iLength, int No)
{
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == No)
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
    printf("enter the number you want to search in array\n");
    scanf("%d", &number);
    bool bRet = Search(ptr, iSize, number);
    if (bRet == true)
    {
        printf("number found\n");
    }
    else if (bRet == false)
    {
        printf("number not found\n");
    }
    free(ptr);
    return 0;
}