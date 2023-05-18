// accept one number and check it is divisible by 5 or not
#include <stdio.h>
#include <stdbool.h>
bool chkIfDivisible(int iValue)
{
    if ((iValue % 5) == 0)
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
    int iNo = 0;
    printf("enter a number\n");
    scanf("%d", &iNo);
    bool bRet = chkIfDivisible(iNo);
    if (bRet == true)
    {
        printf("entered number is divisible by 5\n");
    }
    else
    {
        printf("entered number is not divisible by 5\n");
    }
    return 0;
}