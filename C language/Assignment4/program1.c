/* write a program which accepts number from user and display multiplication of its factors */
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt=0;
    int Multiplication=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            Multiplication=Multiplication*iCnt;
        }
    }
    return Multiplication;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet=MultFact(iValue);
    printf("%d",iRet);
    return 0;
}

/* time complexity is O(N/2) */