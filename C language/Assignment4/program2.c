// accept number from user and display factors in decreasing order
#include <stdio.h>
void RevFactors(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter a number\n");
    scanf("%d", &iValue);
    RevFactors(iValue);
    return 0;
}

/* time complexity is O(N/2) */