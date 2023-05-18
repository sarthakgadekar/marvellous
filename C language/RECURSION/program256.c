#include <stdio.h>

int FactorialI(int iNo)
{
   auto int iFact = 1; 
    while (iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the value\n");
    scanf("%d", &iValue);
    iRet = FactorialI(iValue);
    printf("factorial is : %d\n", iRet);
    return 0;
}