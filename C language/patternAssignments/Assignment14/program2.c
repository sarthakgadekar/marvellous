#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch1='\0';
    char ch2='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch1='A',ch2='a';j<=iCol;ch1++,ch2++,j++)
        {
            if(i%2 != 0)
            {
                printf("%c ",ch1);
            }
            else if(i%2==0)
            {
                printf("%c ",ch2);
            }
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