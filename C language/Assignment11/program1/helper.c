#include"library.h"
int Largest(int Arr[],int iLength)
{
    int start=0;
    int end=iLength -1;
    int iCnt=0;
    int Max=0;
    while(start<end)
    {
        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            if(Arr[start]<Arr[end])
            {
                Max=Arr[end];
                start++;
            }
            else
            {
                Max=Arr[start];
                end--;
            }
        }
        return Max;
    }
}