#include<stdio.h>
void Display(int ptr[])
{
    printf("array elements are\n");
    for(int iCnt=0;iCnt<5;iCnt++)
    {
        printf("%d ",*(ptr+iCnt));
    }
}
int main()
{
     int Arr[5];
    register int iCnt=0;
    printf("enter array elements\n");
    for(iCnt=0;iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    Display(Arr);
    return 0;
}