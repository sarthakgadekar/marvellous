#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch='\0';
    for(i=iRow;i>=1;i--)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d ",i);
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