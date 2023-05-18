//input 4
//output -4 -3 -2 -1  0  1  2  3  4
#include<stdio.h>

void Display(int iNo)
{
   /*  if(iNo>0)        LOGIC 1 complexity O(2N+1)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=iNo;iCnt<=-iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    } */

    int iCnt=0;             //logic 2  complexity O(2N+1)
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d  ",iCnt);
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