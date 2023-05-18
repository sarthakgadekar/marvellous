#include <iostream>
using namespace std;
bool chkVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'a' ||
            *str == 'e' ||
            *str == 'i' ||
            *str == 'o' ||
            *str == 'u' ||
            *str == 'A' ||
            *str == 'E' ||
            *str == 'I' ||
            *str == 'O' ||
            *str == 'U')
        {
            break;
        }
        str++;
    }

    if(*str=='\0')
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
    cout<<"enter string"<<endl;
    char Arr[30];
    cin.getline(Arr,30);
    bool iRet=chkVowel(Arr);
    if(iRet==true)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}