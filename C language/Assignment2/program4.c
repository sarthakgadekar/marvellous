//accept two numbers from users and display first number in second number of times
#include<stdio.h>
void Display(int iNo,int iFreq)
{
    int Cnt=0;
    for(Cnt=1;Cnt<=iFreq;Cnt++)
    {
        printf("%d ",iNo);
    }
}
int main()
{
    int iValue=0;
    int iFrequency=0;
    printf("enter two numbers\n");
    scanf("%d %d",&iValue,&iFrequency);
    Display(iValue,iFrequency);
    return 0;
} 