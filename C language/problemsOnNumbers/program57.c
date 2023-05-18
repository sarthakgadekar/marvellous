#include <stdio.h>
#include <stdbool.h>
bool chkArmstrong(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    int iMult = 1;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iTemp1 = iNo;
    int iTemp2 = iNo;
    while (iTemp1 != 0)
    {
        iCount++;
        iTemp1 = iTemp1 / 10;
    }
    while (iTemp2 > 0)
    {
        iDigit = iTemp2 % 10;
        iMult=1;
        for (int i = 1; i <= iCount; i++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;
        iTemp2 = iTemp2 / 10;
    }
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
    bool bRet = chkArmstrong(iValue);
    if (bRet == true)
    {
        printf("%d is a armstrong number\n", iValue);
    }
    else
    {
        printf("%d is not a armstrong number\n", iValue);
    }
    return 0;
}