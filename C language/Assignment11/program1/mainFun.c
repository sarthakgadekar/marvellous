#include"library.h"
int main()
{
    int iSize=0;
    int iCnt=0;
    int* ptr=NULL;
    printf("enter number of elements\n");
    scanf("%d",&iSize);
    if(iSize<=0)
    {
        printf("there is no allocated space\n");
        return -1;
    }
    ptr=(int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    int iRet=Largest(ptr,iSize);
    printf("largest in the array is %d",iRet);
    free(ptr);
    return 0;
}