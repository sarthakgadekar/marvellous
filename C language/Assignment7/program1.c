/* accept number from user and return count of even digits */
#include <stdio.h>
int CntEven(int iNo)
{
    int count = 0;
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            count++;
        }
        iNo = iNo / 10;
    }
    return count;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int iRet = CntEven(iValue);
    printf("Number of Even digits : %d\n", iRet);
    return 0;
}

/* time complexity : O(N) where N is number of digits */