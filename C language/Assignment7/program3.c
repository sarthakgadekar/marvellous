/* accept number from user then return the count of digits in between 3 and 7 */
#include<stdio.h>
int Cnt3to7(int iNo)
{
    int iDigit=0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int iRet=Cnt3to7(iValue);
    printf("%d",iRet);
    return 0;
}
/* time complexity : O(N) where N is number of digits */