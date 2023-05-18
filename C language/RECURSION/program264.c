#include <stdio.h>

void DisplayChar(int iNo)
{
    static int i=0;
    if (iNo > 0)
    {
        printf("%c  ",'a'+i);
        i++;
        DisplayChar(iNo - 1);
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