#include <stdio.h>
#include <stdlib.h>
void Display(int Arr[], int iLength)
{
    register int iCnt = 0;
    /*  LOGIC 1

        for (iCnt = 0; iCnt < iLength; iCnt++)
     {
         if (Arr[iCnt] % 5 == 0 && Arr[iCnt]%2==0)
         {
             printf("%d ", Arr[iCnt]);
         }
     } */

    // logic 2

        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            if(Arr[iCnt]%10==0)
            {
                printf("%d\n",Arr[iCnt]);
            }
        }
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    register int iCnt = 0;
    printf("enter no of elements you want in an array\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    if (ptr == NULL)
    {
        return -1;
    }
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    Display(ptr, iSize);
    free(ptr);
    return 0;
}