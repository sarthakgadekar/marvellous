#include<bits/stdc++>
using namespace std;

void Display(char str[])
{
    while(*str != '\0')
    {
        cout<<*str;
        str++;

    }
}
int main()
{
    char Arr[20];
    cout<<"enter string"<<endl;
    cin.getline(Arr,20);         
    Display(Arr);
}