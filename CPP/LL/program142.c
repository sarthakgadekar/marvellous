#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("enter no of elements\n");
    scanf("%d",&iLength);
    ptr=(int *)malloc(iLength*sizeof(int));

    for(iCnt=1;iCnt<=iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Summation(ptr,iLength);
    printf("Addition is : %d\n",iRet);
    return 0;
}