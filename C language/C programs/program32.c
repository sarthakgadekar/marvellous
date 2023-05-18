#include <stdio.h>
#include <stdbool.h>
int sumOfFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum > iNo)
        {
            break;
        }
    }
    return iSum;
}

bool chkPerfectNumber(int iNo)
{
    int iSum = sumOfFactors(iNo);
    if (iSum == iNo)
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
    printf("enter a number\n");
    scanf("%d", &iValue);
    bool iRet = chkPerfectNumber(iValue);
    if (iRet == true)
    {
        printf("%d is a perfect number", iValue);
    }
    else
    {
        printf("%d is not perfect number", iValue);
    }
    return 0;
}