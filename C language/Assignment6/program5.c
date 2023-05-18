//write a program which accept numbr from user and count frequency of digits less than 6
#include<stdio.h>
int CntFreq(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int iRet=CntFreq(iValue);
    printf("%d",iRet);
    return 0;
}
/* O(N),where N is no of digits */