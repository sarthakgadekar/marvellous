#include <stdio.h>

int FactorialR(int iNo)
{
    static int iFact = 1; 
    
    if(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("enter the value\n");
    scanf("%d", &iValue);
    
    iRet = FactorialR(iValue);
    
    printf("factorial is : %d\n", iRet);
    
    return 0;
}