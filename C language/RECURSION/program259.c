#include <stdio.h>

int Sum(int *Arr, int size)
{
    static int iSum = 0;

    if (size > 0)
    {
        iSum = iSum + Arr[size - 1];
        size--;
        Sum(Arr, size);
    }
    return iSum;
}
int main()
{
    int Brr[] = {10, 20, 30, 40};
    int iRet = 0;
    iRet = Sum(Brr, 4);
    printf("summation is : %d\n", iRet);
    return 0;
}