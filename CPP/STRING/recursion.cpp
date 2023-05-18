#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    static int ans=1;
    if(n==0)
    {
        cout<<ans;
    }
    else
    {
        ans*=x;
        power(x,n-1);
    }
}
int main()
{
 int x=5,n=4;
 power(x,n);
 return 0;
}