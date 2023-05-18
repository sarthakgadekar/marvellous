//check primt using boolean flag

#include<stdio.h>
#include<stdbool.h>
bool chkPrime(int iNo)
{
    int iCnt=0;
    bool bFlag=true;
    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            bFlag=false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    return 0;
}