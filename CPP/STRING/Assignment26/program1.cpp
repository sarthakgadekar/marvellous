#include <iostream>
using namespace std;
bool chkCharacter(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;
    }
    if (*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char Arr[30], ch;
    cout << "enter string : ";
    cin.getline(Arr, 30);
    cout << "enter a character" << endl;
    cin >> ch;
    bool bRet=chkCharacter(Arr, ch);
    if(bRet==true)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}