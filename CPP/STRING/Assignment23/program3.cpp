#include <iostream>
using namespace std;

void TILL_Z_or_till_a(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        while(ch>='a')
        {
            cout<<ch<<' ';
            ch--;
        }
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        while(ch<='Z')
        {
            cout<<ch<<' ';
            ch++;
        }
    }

    else
    {
        return;
    }
}
int main()
{
    char cValue;
    cout << "enter a character" << endl;
    cin >> cValue;
    TILL_Z_or_till_a(cValue);
    return 0;
}