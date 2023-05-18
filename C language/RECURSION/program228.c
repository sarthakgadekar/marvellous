#include<stdio.h>

void DisplayI(int no)
{
    auto int iCnt=0;
    while(no != 0)
    {
        printf("%d  ",no%10);
        no=no/10;
    }
    printf("\n");
}

void DisplayR(int no)
{
    if(no != 0)
    {
        printf("%d  ",no%10);
        no=no/10;
        DisplayR(no);
    }
    printf("\n");
}
int main()
{
    DisplayI(123);
    DisplayR(123);
    return 0;
}