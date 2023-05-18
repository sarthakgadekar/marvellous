#include <stdio.h>
#include <stdbool.h>

int countFactor(int iNo)
{
    int count = 0;
    int iCnt = 0;
    for (iCnt = 2; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            count++;
        }
    }
    return count;
}
bool chkPrime(int iNo)
{
    int iCount = countFactor(iNo);
    if (iCount == 1)
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
    int iValue = 0;
    printf("enter number\n");
    scanf("%d", &iValue);
    bool bRet = chkPrime(iValue);
    if(bRet==true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
    }
    return 0;
}