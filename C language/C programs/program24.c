#include <stdio.h>
#include <stdbool.h>
bool chkIfDivisible(int iNo)
{
    if (
        ((iNo % 3) == 0) && 
        ((iNo % 5) == 0)
        )
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
    int iValue;
    printf("enter a number\n");
    scanf("%d", &iValue);
    bool bRet = chkIfDivisible(iValue);
    if (bRet == true)
    {
        printf("divisible by 3 and 5\n");
    }
    else
    {
        printf("not divisible by 3 and 5\n");
    }
    return 0;
}