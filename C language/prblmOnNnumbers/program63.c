#include <stdio.h>
void Display(int *ptr)
{
    int iCnt = 0;
    printf("array elements are\n");
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}
int main()
{
    int Arr[5];
    register int iCnt = 0;
    printf("enter array elements\n");
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }
    Display(Arr);
    return 0;
}