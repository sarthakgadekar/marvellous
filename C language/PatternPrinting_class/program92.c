/* 
$  2  3  4  
1  $  3  4
1  2  $  4
1  2  3  $
 
*/

#include <stdio.h>
void Display(int iRows, int iCol)
{
    int i = 0, j = 0;
    if(iRows != iCol)
    {
        return;
    }
    for (i = 1; i <= iRows; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if(i==j)
            {
                printf("$  ");
            }
            else
            {
                printf("%d  ",j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("please enter no of rows\n");
    scanf("%d", &iValue1);
    printf("please enter no of column\n");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}