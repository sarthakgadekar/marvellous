//accept number from user and displays all its non factors
#include<stdio.h>

void DispNonFact(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    DispNonFact(iValue);
}

/* time complexity is O(N) */