#include <stdio.h>
void Display(int iRows, int iCol)
{
    int i = 0, j = 0;
    char ch='\0';
    for (i = 1,ch='A'; i <= iRows; i++,ch++)
    {
        
        for (j = 1; j <= i;j++)
        {
           printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("please enter no of rows\n");
    scanf("%d", &iValue1);
    printf("please enter no of column\n");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}