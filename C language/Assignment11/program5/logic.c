#include"library.h"
void Summation(int Arr[], int iLength)
{
    register int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;
        while (Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d ",iSum);
    }
}