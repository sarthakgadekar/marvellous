#include<iostream>
using namespace std;

void toggleCharacter(char ch)
{
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        cout<<"toggled character is "<<ch<<endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        cout<<"toggled character is "<<ch<<endl;
    }
    else
    {
        cout<<ch<<endl;
    }
}
int main()
{
    char cValue;
    cout<<"enter a character"<<endl;
    cin>>cValue;
    toggleCharacter(cValue);
    return 0;
}