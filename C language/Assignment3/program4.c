//accept one character from user and convert case of that character
#include<stdio.h>

char convertCase(char Cvalue)
{
    if(Cvalue>=65 && Cvalue<=90)
    {
        Cvalue+=32;
    }
    else if(Cvalue>=97 && Cvalue<=122)
    {
        Cvalue-=32;
    }
    return Cvalue;
}
int main()
{
     char ch;
     printf("enter a character\n");
     scanf("%c",&ch);
     char cRet=convertCase(ch);
     printf("input: %c  output: %c",ch,cRet);
    return 0;
}