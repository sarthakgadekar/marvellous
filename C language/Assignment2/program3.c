//accept one number from user and if it is less than 10,then print 'Hello' otherwise print 'Demo'
#include<stdio.h>
void Hello_OR_Demo(int iValue)
{
    if(iValue<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iNo=0;
    printf("enter a number\n");
    scanf("%d",&iNo);
    Hello_OR_Demo(iNo);
    return 0;
}