#include<iostream>
using namespace std;

void dispReverse(char *str)
{
    char *temp=str;
    while(*temp != '\0')
    {
        temp++;
    }
    temp--;
    while(temp != str-1)
    {
        cout<<*temp;
        temp--;
    }
}
int main()
{
    cout<<"enter string : ";
    char Arr[20];
    cin.getline(Arr,20);
    dispReverse(Arr);
    return 0;
}