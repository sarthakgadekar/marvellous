// accept number and return number of digits from that number
#include <stdio.h>

int countDigits(int iNo)
{
    int iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    int digitNumber = countDigits(iValue);
    printf("%d", digitNumber);
    return 0;
}