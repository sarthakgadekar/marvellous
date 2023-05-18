#include<stdio.h>
int main()
{
    char ch[10];
    printf("enter string\n");
    scanf("%s",ch);
    printf("%100.5s",ch);
    /* gets(ch);
    printf("%s",ch);
    printf("%s",ch); */
    return 0;
}