#include<stdio.h>

void Display(char* str)
{
    if(*str !='\0')
    {
        Display(str+1);         //head recursion
        printf("%s\n",str);
    }
}
int main()
{
    char Arr[]="sarthak";
    printf("enter string");
    Display(Arr);
    return 0;
}