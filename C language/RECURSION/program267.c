#include<stdio.h>

void Display(char* str)
{
    if(*str !='\0')
    {
        Display(str+1);         //head recursion
        printf("%c\n",*str);
    }
}
int main()
{
    char Arr[]="sarthak";
    


    
    Display(Arr);
    return 0;
}