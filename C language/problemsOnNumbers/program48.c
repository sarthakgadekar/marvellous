
#include <stdio.h>
int sumOfDigits(int iNo)
{
    int iDigit=0;
    int iSum=0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int TotalSum = sumOfDigits(iValue);
    printf("%d", TotalSum);
    return 0;
}