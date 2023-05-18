// write a program which accept a number from user and print even factors of that number
#include <stdio.h>
void displayEvenFactors(int iNo)
{
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt = 2; iCnt <= iNo / 2; iCnt = iCnt += 2)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    displayEvenFactors(iValue);
    return 0;
}