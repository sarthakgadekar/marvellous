//accept number from user and count number of two's in it
#include<stdio.h>
int Cnt_Two(int iNo)
{
    int iDigit=0;
    int CntFreq=0;
     if(iNo<0)
    {
        iNo=-iNo;
    } 
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
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
    int iRet=Cnt_Two(iValue);
    printf("%d",iRet);
    return 0;
}

/* O(N),where N is no of digits. */