#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("enter a value\n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}