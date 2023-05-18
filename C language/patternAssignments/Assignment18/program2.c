#include<stdio.h>

void Pattern(int iRows,int iCol)
{
    int i=0;
    int j=0;
    if(iRows != iCol)
    {
        printf("rows and colums should be same\n");
        return;
    }

    for(i=1;i<=iRows;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            if(i==j)
            {
                printf("#\t");
            }
            else if(i>j)
            {
                printf("@\t");
            }

            else if(i<j)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter no of rows\n");
    scanf("%d",&iValue1);
    printf("enter no of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}