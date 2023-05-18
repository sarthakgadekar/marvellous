
#include <stdio.h>
int sumOfEven(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSum=iSum+iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int iSum=sumOfEven(iValue);
    printf("%d",iSum);
    return 0;
}