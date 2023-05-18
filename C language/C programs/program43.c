//check prime
#include<stdio.h>
#include<stdbool.h>
bool chkPrime(int iNo)
{
    int iCount=0;
    int iCnt=0;

    for(iCnt=2;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCount++;
            break;
        }
    }
    if(iCount==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=chkPrime(iValue);
    return 0;
}