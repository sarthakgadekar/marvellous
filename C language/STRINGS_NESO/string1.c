#include<stdio.h>
int main()
{
    //how to print string using printf 
    printf("%s","Hello Sarthak\n");     // %s is a format specifier for C

    //string is an array of characters
    char* String="string is an array of characters\n";
    printf("%s",String);
    printf("%c","string is an array of characters"[2]);
    printf("\n");
    
    printf("you have to"
           " work hard\n");
    return 0;
}