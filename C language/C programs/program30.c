// accept number from user and display sum of its factors
#include<stdio.h>
int AdditionOfFactors(int iNo)
{
    int iSumOfFactors=0;
    if(iNo<0)                   //updater
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSumOfFactors=iSumOfFactors+iCnt;
        }
    }
    return iSumOfFactors;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int iRet=AdditionOfFactors(iValue);
    printf("sum of factors is %d",iRet);
    return 0;
}