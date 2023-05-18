#include<stdio.h>
int main()
{
    char s[]="Hello world";
    printf("%.5s",s);
    printf("\n");
    printf("%100.11s",s);
    return 0;
}