//program to divide two numbers
#include<stdio.h>
int division(int iValue1,int iValue2)
{
    int div=0;
    div=iValue1/iValue2;
    return div;

}
int main()
{
    int iNo1=0;
    int iNo2=0;
    printf("enter dividend and divisor\n");
    scanf("%d %d",&iNo1,&iNo2);
    if(iNo1<iNo2)
    {
        int temp=iNo2;
        iNo2=iNo1;
        iNo1=temp;
    }
    int ans=division(iNo1,iNo2);
    printf("division of %d and %d is %d",iNo1,iNo2,ans);
    return 0;
}