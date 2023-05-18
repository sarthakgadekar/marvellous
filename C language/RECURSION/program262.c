#include <stdio.h>

int Sum(int iNo)
{
    int iDigit=0;
    static int iSum = 0;
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        Sum(iNo = iNo / 10);
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    printf("enter a no\n");
    scanf("%d", &iValue);
    int iRet = Sum(iValue);
    printf("%d",iRet);
    return 0;
}