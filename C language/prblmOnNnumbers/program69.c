#include <stdio.h>
#include <stdlib.h> //for malloc and free
void Display(int Arr[],int iLength)
{
    int iCnt=0;
    printf("array elements are\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d ", Arr[iCnt]);
    }
}
int main()
{
    // auto int Brr[5];      static memory allocation
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;
    printf("enter the number of elements\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    Display(ptr,iSize);
    free(ptr);
    return 0;
}