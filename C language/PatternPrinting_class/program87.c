#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    /* for(iCnt=1;iCnt<=iNo;iCnt+=2)
    {
        if(iCnt==iNo-1)
        {
            printf("%d",iCnt);
            break;
        }
        printf("%d\t*\t",iCnt);
    } */

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("please enter value\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}