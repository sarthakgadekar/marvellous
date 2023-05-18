#include<stdio.h>
#include<stdbool.h>
bool chkPalindrome(int iNo)
{
   if(iNo<0)
   {
       iNo=-iNo;
   }
   int cpyIno=iNo;
   int iDigit=0;
   int iRev=0;
   while(iNo>0)
   {
       iDigit=iNo%10;
       iRev=iRev*10+iDigit;
       iNo=iNo/10;
   } 
    if(iRev==cpyIno)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    printf("enter a number\n");
    scanf("%d",&iValue);
    bool bRet=chkPalindrome(iValue);
    if(bRet==true)
    {
        printf("%d is palindrome\n",iValue);
    }
    else
    {
        printf("%d is not a palindrome\n",iValue);
    }
    return 0;
}