#include <stdio.h>
#include <stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            printf("%d ",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    printf("enter number of elements\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter the values of array\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    DisplayEven(ptr, iSize);
    free(ptr);
    return 0;
}