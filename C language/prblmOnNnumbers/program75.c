#include<stdio.h>
#include<stdlib.h>
int ArrMin(int Arr[],int iLength)   //this code works for positive and negative inputs
{
    register int iCnt=0;
    int min=Arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<min)
        {
            min=Arr[iCnt];
        }
    }
    return min;
}
int main()
{
    int iSize=0;
    int* ptr=NULL;
    register int iCnt=0;
    printf("enter no of elements\n");
    scanf("%d",&iSize);
    printf("enter array elments\n");
    ptr=(int *)malloc(iSize * sizeof(int));
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    int iRet=ArrMin(ptr,iSize);
    printf("minimum in array is %d\n",iRet);
    free(ptr);
    return 0;
}