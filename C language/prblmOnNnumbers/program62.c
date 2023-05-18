#include<stdio.h>
int main()
{
    int Arr[5];                                 //statically allocated array
    register int aIndex=0;
    printf("enter array elements\n");
    for(aIndex=0;aIndex<5;aIndex++)
    {
        scanf("%d",&Arr[aIndex]);
    }
    printf("array elements are\n");
    for(int aIndex=0;aIndex<5;aIndex++)
    {
        printf("%d ",Arr[aIndex]);
    }
    return 0;
}