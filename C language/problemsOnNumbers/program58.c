#include <stdio.h>
#include <stdbool.h>

int Power(int iNo1, int iNo2)   // 3    4
{
    int iMult = 1;
    register int iCnt = 0;
    //          1           2                 3
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;       // 4
    }
    return iMult;
}
bool chkArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0;
    int iDigit = 0;
    int iSum = 0;
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
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iDigCnt); // helper56 function
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
    bool bRet;
    bRet = chkArmstrong(iValue);
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