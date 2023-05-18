#include <stdio.h>

void Display(int value)
{
    if(value==0)
    {
        return;
    }
    printf("%d  ",value);
    Display(value-1);
}
int main()
{
    Display(5);
    return 0;
}