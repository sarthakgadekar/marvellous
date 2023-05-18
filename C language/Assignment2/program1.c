//accept one number of user and print that number of stars(*) on scrren
#include<stdio.h>

void printStars(int iNo)
{
    int count=0;
    for(count=1;count<=iNo;count++)
    {
    printf(" * ");
    }
}
int main()
{
    int iStars=0;
    printf("enter number of stars you want to print\n");
    scanf("%d",&iStars);
    printStars(iStars);
    return 0;
}