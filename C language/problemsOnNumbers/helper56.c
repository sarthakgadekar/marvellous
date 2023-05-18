#include "Header56.h"
ULONG Power(int iValue1, int iValue2)
{
    register int iCnt = 0;
    ULONG Mult = 1;
    for (iCnt = 1; iCnt <= iValue2; iCnt++)
    {
        Mult = Mult * iValue1;
    }
    return Mult;
}