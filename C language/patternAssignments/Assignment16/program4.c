
/*  

* * * * *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* * * * *

*/


#include <stdio.h>
void pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    if (iRows != iCol)
    {
        printf("rows and columns should be same for this pattern\n");
        return;
    }

    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <=iCol; j++)
        {
            if (i==1 || i==iRows || j==1 || j==iCol)
            {
                printf("* ");
            }
            else
            {
                printf("@ ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter no of rows\n");
    scanf("%d", &iValue1);
    printf("enter no of columns\n");
    scanf("%d", &iValue2);
    pattern(iValue1, iValue2);
    return 0;
}