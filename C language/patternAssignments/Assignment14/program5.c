#include <stdio.h>

void pattern(int iRow, int iCol)
{
    int j = 0;
    for (j = 1; j <= iCol * iRow; j++)
    {
        if (j % iCol == 0)
        {
            printf("%d\t", j);
            printf("\n");
        }
        else if (j % iCol != 0)
        {
            printf("%d\t", j);
        }
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("enter two values\n");
    scanf("%d", &iValue1);
    scanf("%d", &iValue2);
    pattern(iValue1, iValue2);
    return 0;
}