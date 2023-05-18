#include <stdio.h>
void pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    char ch='\0';
    if (iRows != iCol)
    {
        printf("rows and columns should be same!!!\n");
        return;
    }

    for (i = 1; i <= iRows; i++)
    {
        for (j = 1,ch='a'; j <= iCol;ch++, j++)
        {
            if(i%2 != 0)
            {
                printf("%c\t",ch);
            }
            else if(i%2==0)
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter rows\n");
    scanf("%d", &iValue1);
    printf("enter columns\n");
    scanf("%d", &iValue2);
    pattern(iValue1, iValue2);
    return 0;
}