#include<stdio.h>

int reverseNumber(int iNo)
{
   int iDigit=0;
   int iRev=0;
   while(iNo>0)
   {
       iDigit=iNo%10;
       iRev=iRev*10+iDigit;
       iNo=iNo/10;
   } 
   return iRev;
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    int reverseNo=reverseNumber(iValue);
    printf("%d",reverseNo);
    return 0;
}