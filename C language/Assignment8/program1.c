#include<stdio.h>
#include<stdlib.h>
int DiffBetEvenOdd(int A[],int iLength)
{
    int iCnt=0;
    int evenSum=0;
    int oddSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(A[iCnt]%2==0)
        {
            evenSum=evenSum+A[iCnt];
        }
        else
        {
            oddSum=oddSum+A[iCnt];
        }
    }
    return evenSum-oddSum;
}
int main()
{
    int iSize=0;
    int* ptr=NULL;
    int iCnt=0;
    printf("enter number of elements\n");
    scanf("%d",&iSize);
    ptr=(int *) malloc (iSize * sizeof(int));
    if(ptr==NULL)
    {
        return -1;
    }
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);

    }
    int iRet=DiffBetEvenOdd(ptr,iSize);
    printf("difference between even and odd is %d",iRet);
    return 0;
}