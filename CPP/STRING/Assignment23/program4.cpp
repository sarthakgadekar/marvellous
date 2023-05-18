#include <iostream>
using namespace std;

void specialSymbol(char ch)
{
    if (!((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')|| (ch >= '0' && ch <= '9')))
    {
        cout<<ch<<" is special symbol"<<endl;
    }
    else
    {
        cout<<"it is not special symbol"<<endl;
    }
}

int main()
{
    char cValue;
    cout << "enter a character" << endl;
    cin >> cValue;
    specialSymbol(cValue);
    return 0;
}