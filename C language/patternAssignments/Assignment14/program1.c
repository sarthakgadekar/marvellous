#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A';j<=iCol;ch++,j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter two values\n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);
    return 0;
}