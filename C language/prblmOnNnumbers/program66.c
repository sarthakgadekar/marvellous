#include<stdio.h>
void Display(int Arr[])
{
    printf("array elements are\n");
    for(int iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d ",Arr[iCnt]);
    }
}
int main()
{
     int Brr[5];
    register int iCnt=0;
    printf("enter array elements\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    Display(Brr);
    return 0;
}