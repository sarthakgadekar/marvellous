/* write a program which accepts number from user and returns sum of its non factors */

#include<stdio.h>
int SumNonFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int sumOfNonFact=SumNonFactors(iValue);
    printf("sum of non factors of %d is %d\n",iValue,sumOfNonFact);
    return 0;
}

/* time complexity is O(N) */