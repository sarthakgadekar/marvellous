#include <stdio.h>
#include <stdlib.h>
int freqOf11(int Arr[],int iLength)
{
    int iCnt=0;
    int iFreq=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    printf("enter no of elements\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr==NULL)
    {
        printf("there is no allocated memory\n");
        return -1;
    }
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    int iFreq=freqOf11(ptr,iSize);
    printf("frequency of 11 in array is %d\n",iFreq);
    free(ptr);
    return 0;
}