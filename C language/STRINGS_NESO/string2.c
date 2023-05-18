#include<stdio.h>

int main()
{
    char* name="sarthak";
    //name[2]='s';  not allowed to change string literal
    printf("%c",name[2]);
    printf("\n");
    name="siddharth";
    printf("%s",name);
    return 0;
}