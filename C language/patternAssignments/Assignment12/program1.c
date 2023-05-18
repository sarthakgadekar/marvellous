#include<stdio.h>

void pattern(int iNo)
{
   
    register int iCnt=0;
    char ch='\0';
    for(iCnt=1,ch='A';iCnt<=iNo;ch++,iCnt++)
    {
        printf("%c ",ch);
    }
}
int main()
{
    int iValue=0;
    printf("enter number of elements\n");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}