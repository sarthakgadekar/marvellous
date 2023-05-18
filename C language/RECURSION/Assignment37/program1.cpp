#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo==0)
    {
        return;
    }
    cout<<"*  ";
    Display(iNo-1);
}
int main()
{
    int value=0;
    cin>>value;
    Display(value);
    return 0;
}