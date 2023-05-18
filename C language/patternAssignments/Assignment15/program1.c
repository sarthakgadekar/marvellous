#include <stdio.h>
void pattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = 0;
    if (iRows != iCol)
    {
        printf("rows and columns should be same!!!\n");
        return;
    }

    iNo=1;
    for (i = 1; i <= iRows;  i++)
    {
        for (j = 1; j <= iCol;iNo++, j++)
        {
            if (iNo == 9)
            {
                printf("%d ", iNo);
                iNo = 0;
            }
            else
            {
                printf("%d ", iNo);
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