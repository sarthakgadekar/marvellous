#include "library.h"
void Display3DigitNum(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iCount = 0;
    int temp = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        /*  LOGIC 1
        
        if (Arr[iCnt] > 99 && Arr[iCnt] < 1000)
         {
             printf("%d\n", Arr[iCnt]);
         } 
         
         */
        
        // LOGIC 2
        iCount = 0;
        temp = Arr[iCnt];
        while (Arr[iCnt] > 0)
        {
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        if (iCount == 3)
        {
            printf("%d\n", temp);
        }
    }
}