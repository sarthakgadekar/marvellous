//accept number from user andcount frequency of four in it
#include<stdio.h>
int CountFour(int iNo)
{
    int iDigit=0;
    int CntFreq=0;
     if(iNo<0)
    {
        iNo=-iNo;
    } 
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            CntFreq++;
        }
        iNo=iNo/10;
    }
    return CntFreq;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int iRet=CountFour(iValue);
    printf("%d",iRet);
    return 0;
}
/* O(N),where N is no of digits */