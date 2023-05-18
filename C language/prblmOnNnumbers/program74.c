#include<stdio.h>
#include<stdlib.h>
int ArrMax(int Arr[],int iLength)   //this code works for positive and negative inputs
{
    register int iCnt=0;
    int max=Arr[0];
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>max)
        {
            max=Arr[iCnt];
        }
    }
    return max;
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
    int iRet=ArrMax(ptr,iSize);
    printf("maximum in array is %d\n",iRet);
    free(ptr);
    return 0;
}