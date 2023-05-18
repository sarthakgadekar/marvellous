// check whether givan character is capital or not
#include <iostream>
using namespace std;
#define bool int;
#define true 1;
#define false 0;

int chkCapital(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return 1;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int main()
{
    char cValue;
    cin >> cValue;
    int bRet = false;
    bRet = chkCapital(cValue);
    if (bRet ==1)
    {
        cout << "character is capital\n";
    }
    else if(bRet==0)
    {
        cout << "character is not capital\n";
    }
    else
    {
        cout<<"character is neither capital nor small"<<endl;
    }
    return 0;
}