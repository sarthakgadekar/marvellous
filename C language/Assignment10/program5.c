#include <stdio.h>
#include <stdlib.h>

int oddProduct(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iMult = 1;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
}
int main()
{
    int iCnt = 0;
    int iSize = 0;
    int *ptr = NULL;
    printf("enter number of elements\n");
    scanf("%d", &iSize);
    if (iSize <= 0)
    {
        printf("unable to allocate space\n");
        return -1;
    }
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    int iRet = oddProduct(ptr, iSize);
    printf("product of odd elements is %d", iRet);

    return 0;
}