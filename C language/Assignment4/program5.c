/*write a program which accept number from
user and return diference between its factors and non factors
*/

#include <stdio.h>

int sumDiff(int iNo)
{
    int iCnt = 0;
    int factSum = 0;
    int nonFactSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            factSum = factSum + iCnt;
        }
        else
        {
            nonFactSum = nonFactSum + iCnt;
        }
    }
    return factSum - nonFactSum;
}

int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int iRet = sumDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}

/* time complexity is O(N) */