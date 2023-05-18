//accept one number of user and print that number of stars(*) on scrren
#include<stdio.h>

void printStars(int iStars)
{
    int Cnt=0;
    while(iStars>Cnt)
    {
        printf("*");
        iStars--;
    }
}
int main()
{
    int iNo=0;
    printf("enter number of stars you want to print\n");
    scanf("%d",&iNo);
    printStars(iNo);
    return 0;
}