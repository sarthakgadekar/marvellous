// accept character from user and check whether it is digit or not  (0 to 9)

#include <iostream>
using namespace std;
#define bool int;
#define true 1;
#define false 0;

int chkSmallCase(char ch)
{
    if(ch>='a' && ch<='z')
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
    int bRet = chkSmallCase(cValue);
    if(bRet==1)
    {
        cout<<"it is small case"<<endl;
    }
    else
    {
        cout<<"it is not small case"<<endl;
    }
    return 0;
}