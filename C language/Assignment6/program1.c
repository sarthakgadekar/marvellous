/* write a program which accept number from user and display its digits in reverse order */

#include<stdio.h>
void DisplayReverse(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    DisplayReverse(iValue);
    return 0;
}

/* O(N),where N is no of digits */