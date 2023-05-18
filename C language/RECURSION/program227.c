#include<stdio.h>

void DisplayI()
{
    auto int iCnt=0;
    while(iCnt<4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

void DisplayR()
{
    static int iCnt=0;
    if(iCnt<4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
    printf("\n");
}
int main()
{
    DisplayI();
    DisplayR();
    return 0;
}