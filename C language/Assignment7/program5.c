/* accept number from user and return difference
   between summation of even digits and odd digits */
#include <stdio.h>
int CntDiff(int iNo)
{
    int iDigit = 0;
    int EvenSum = 0;
    int OddSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            EvenSum = EvenSum + iDigit;
        }
        else
        {
            OddSum = OddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    int DIFF = EvenSum - OddSum;
    return DIFF;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int iRet = CntDiff(iValue);
    printf("Difference between even digits sum and odd digits sum is  %d", iRet);
    return 0;
}
/* time complexity : O(N) where N is number of digits */