#include <stdio.h>

void pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = iCol; j >=1; j--)
        {
            if (j >= i)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
    int main()
    {
        int iValue1 = 0;
        int iValue2 = 0;
        printf("Enter no of rows\n");
        scanf("%d", &iValue1);
        printf("Enter no of columns\n");
        scanf("%d", &iValue2);
        pattern(iValue1, iValue2);
        return 0;
    }