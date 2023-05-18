// how to copy one string into other string using for loop
#include <stdio.h>
int main()
{
    int Cnt = 0;
    char cpyString[20];
    char name[] = "Hello Sarthak";
    for (Cnt = 0; name[Cnt] != '\0'; Cnt++)
    {
        cpyString[Cnt] = name[Cnt];
    }
    cpyString[Cnt]='\0';
    printf("%s", cpyString);
    return 0;
}