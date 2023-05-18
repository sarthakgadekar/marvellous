/* write a program which accept number from user and check whether there are zeroes in it or not */
#include <stdio.h>
#include <stdbool.h>
bool chkZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            bFlag = true;
            break;
        }
        iNo=iNo/10;
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    bool bRet = chkZero(iValue);
    if (bRet == true)
    {
        printf("it contains zero\n");
    }
    else
    {
        printf("there is no zero\n");
    }
    return 0;
}

/* O(N),where N is no of digits */