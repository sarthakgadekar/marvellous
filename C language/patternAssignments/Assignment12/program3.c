#include<stdio.h>
void pattern(int iNo)
{
     int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}
int main()
{
    int iValue1=0;
    printf("Enter a value\n");
    scanf("%d",&iValue1);
    pattern(iValue1);
    return 0;
}