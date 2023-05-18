#include <stdio.h>
#include <stdlib.h>

void displayRange(int Arr[], int iLength, int start, int end)
{
    register int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= start && Arr[iCnt] < end)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int startPt = 0;
    int endPt = 0;
    printf("enter no of elements\n");
    scanf("%d", &iSize);
    
    if (iSize <= 0)
    {
        printf("unable to allocate memory\n");
        return -1;
    }
    printf("enter starting point of range\n");
    scanf("%d", &startPt);
    printf("enter ending point of range\n");
    scanf("%d", &endPt);
    
    if (startPt == endPt)
    {
        printf("starting point and ending point of range is same\n");
        return -1;
    }
    
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    displayRange(ptr, iSize, startPt, endPt);
    free(ptr);
    return 0;
}