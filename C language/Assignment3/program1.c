/*write a program which accepts one number from user and print that no of even numbers on screen

input: 4
output: 2 4 6 8

*/
#include<stdio.h>
void printEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d ",2*iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}