#include"library.h"
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0;
    printf("enter no of elements\n");
    scanf("%d",&iSize);
    if(iSize<=0)
    {
        printf("unable to allocate memory\n");
        return -1;
    }
    ptr=(int *)malloc(iSize * sizeof(int));
    printf("enter %d elements\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Summation(ptr,iSize);
    free(ptr);
    return 0;
}