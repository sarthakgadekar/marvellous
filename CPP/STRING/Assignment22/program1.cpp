// check whether givan input is character or not
#include <iostream>
using namespace std;

bool chkAlphabet(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue;
    cin >> cValue;
    bool bRet = chkAlphabet(cValue);
    if (bRet == true)
    {
        cout << "given input is character\n";
    }
    else
    {
        cout<<"given input is not character\n";
    }
    return 0;
}