#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[],int iLength)
{
    register int iCnt=0;
    int evenFreq=0;
    int oddFreq=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            evenFreq++;
        }
        else
        {
            oddFreq++;
        }
    }
    return evenFreq-oddFreq;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    printf("enter array size\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("there is no allocated space\n");
        return -1;
    }
     printf("enter array inputs\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    int iRet=Difference(ptr,iSize);
    printf("Difference between frequency of even numbers and odd numbers is %d",iRet);
    free(ptr);
    return 0;
}