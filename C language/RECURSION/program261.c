#include<stdio.h>

int countSmall(char *str)
{
    static int count=0;
    if(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            count++;
        }
        str++;
        countSmall(str);
    }
    return count;
}
int main()
{
    int iRet=0;
    char Arr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet=countSmall(Arr);
    printf("%d",iRet);
    return 0;
}