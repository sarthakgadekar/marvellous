#include<stdio.h>
void pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter a value\n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}