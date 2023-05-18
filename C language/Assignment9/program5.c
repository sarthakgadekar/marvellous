#include <stdio.h>
#include <stdlib.h>

int CntFreq(int Arr[],int iLength,int iNo)
{
    register int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue=0;
    int *ptr = NULL;
    printf("enter no of elements\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        printf("there is no allocated space\n");
        return -1;
    }
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    printf("enter the number you want to find frequency of : ");
    scanf("%d",&iValue);
    int iRet=CntFreq(ptr,iSize,iValue);
    printf("frequency of %d is %d\n",iValue,iRet);
    free(ptr);
    return 0;
}