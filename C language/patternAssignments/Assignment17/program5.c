#include <stdio.h>
void Pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i > j)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t", j);
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
    Pattern(iValue1, iValue2);
    return 0;
}