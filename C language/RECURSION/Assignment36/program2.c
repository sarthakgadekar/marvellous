#include <stdio.h>

void Display(int value)
{
    static int iNo = 1;
    if (iNo <= value)
    {
        printf("%d ", iNo);
        iNo++;
    }
    Display(value);
}
int main()
{
    Display(5);
    return 0;
}