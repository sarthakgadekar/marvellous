/* write a program which accept number from user and return multiplication of digits  */
#include<stdio.h>
int multiFunc(int iNo)
{
    int multi=1;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        multi=multi*iDigit;
        iNo=iNo/10;
    }
    return multi;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int iRet=multiFunc(iValue);
    printf("%d",iRet);
    return 0;
}
/* time complexity : O(N) where N is number of digits */