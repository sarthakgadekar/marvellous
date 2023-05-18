#include<stdio.h>

void DisplayChar(int iNo)
{
    static int i=0;
    static char ch='a';

    if(i<iNo)
    {
        printf("%c  ",ch);
        ch++;
        i++;
        DisplayChar(iNo);
    }
}
int main()
{
    int iValue=0;
    printf("enter a no\n");
    scanf("%d",&iValue);
    DisplayChar(iValue);
    return 0;
}