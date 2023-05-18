#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int SearchLastOccurence(int Arr[], int iLength,int No)
{
    register int iCnt = 0;
    for (iCnt = iLength-1; iCnt >=0; iCnt--)
    {
        if (Arr[iCnt] == No)
        {
            break;
        }
    }
    return iCnt;                                    /* if there is no occurence,iCnt will be -1 after iteration */
    

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
    printf("enter the number you want to search \n");
    scanf("%d", &number);
    int iRet=SearchLastOccurence(ptr, iSize, number);
    if(iRet==-1)
    {
        printf("there is no occurence of %d\n",number);
    }
    else
    {
        printf("last occurence is at index %d\n",iRet);
    }
    free(ptr);
    return 0;
}