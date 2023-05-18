#include <stdio.h>
int Power(int a, int b)
{
    int ans=1;
    int counter=0;
    while(counter<b)
    {
        ans=ans*a;
        counter++;
    }
    return ans;
}
int main()
{
    int a = 0, b = 0;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    int iRet = Power(a, b);
    printf("%d",iRet);
    return 0;
}