#include<stdio.h>

void Display(char* str)
{
    if(*str !='\0')
    {
        printf("%c\n",*str);
        Display(++str);         //tail recursion
    }
}
int main()
{
    char Arr[]="sarthak";
    Display(Arr);
    return 0;
}