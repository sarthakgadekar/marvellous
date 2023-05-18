#include <stdio.h>

void DisplayChar(int iNo)
{
    static int i = 0;
    static char ch='a';

    if(i<iNo)
    {
        i++;
        DisplayChar(iNo);
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    int iValue = 0;
    printf("enter a no\n");
    scanf("%d", &iValue);
    DisplayChar(iValue);
    return 0;
}