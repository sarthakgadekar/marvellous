#include <stdio.h>
#include <stdbool.h>

bool chkArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iCnt=0;
    int iMult=1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    iTemp = iNo;
    while (iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }
    iNo = iTemp;
    while (iNo != 0)
    {
        int iMult=1;
        iDigit = iNo % 10;
        for (iCnt = 1; iCnt <= iDigCnt; iCnt++)
    {
        iMult = iMult * iDigit;
    }
        iSum = iSum + iMult; // helper56 function
        iNo = iNo / 10;
    }
    if (iSum == iTemp)
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
        printf("%d is a armstrong number\n", iValue);
    }
    return 0;
}