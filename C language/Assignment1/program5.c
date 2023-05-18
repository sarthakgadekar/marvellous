//enter a number and priint that number of '*' on screen
#include<stdio.h>
void printStars(int iValue)
{
    int stars=0;
    for(int stars=1;stars<=iValue;stars++)
    {
        printf("* ");
    }

}
int main()
{
    int iNo=0;
    printf("enter a number of stars\n");
    scanf("%d",&iNo);
    printStars(iNo);
    return 0;
}