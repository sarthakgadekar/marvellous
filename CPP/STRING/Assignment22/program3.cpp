// accept character from user and check whether it is digit or not  (0 to 9)

#include <iostream>
using namespace std;
#define bool int;
#define true 1;
#define false 0;

int chkDigit(char ch)
{
    if(ch>='0' && ch<='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue;
    cin >> cValue;
    int bRet = chkDigit(cValue);
    if(bRet==1)
    {
        cout<<"it is digit"<<endl;
    }
    else
    {
        cout<<"it is not digit"<<endl;
    }
    return 0;
}