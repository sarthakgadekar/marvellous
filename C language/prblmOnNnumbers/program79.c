#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int SearchIndex(int Arr[], int iLength,int No)
{
    register int iCnt = 0;
    int Index=-1;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == No)
        {
            Index=iCnt;
            break;
        }
    }
    return Index;

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
    printf("enter the number of which you want index\n");
    scanf("%d", &number);
    int iRet=SearchIndex(ptr, iSize, number);
    printf("%d",iRet);
    free(ptr);
    return 0;
}