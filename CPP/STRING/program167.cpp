#include<bits/stdc++.h>
using namespace std;

void Display(char str[])
{

    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;

    }
}
int main()
{
    char Arr[20];
    //cin>>Arr;                         it doesn't read after space
    scanf("%[^'\n']s",Arr);             
    Display(Arr);
}