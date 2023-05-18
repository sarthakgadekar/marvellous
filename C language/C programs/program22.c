#include <stdio.h>
int printSum(int iNo)
{
    int iTotalSum = 0;
    int iCount = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (iCount = 1; iCount <= iNo; iCount++)
    {
        iTotalSum = iTotalSum + iCount;
    }
    return iTotalSum;
}
int main()
{
    int iNum = 0;
    printf("enter a number\n");
    scanf("%d", &iNum);
    int iRet = printSum(iNum);
    printf("summation is %d ", iRet);
    return 0;
}