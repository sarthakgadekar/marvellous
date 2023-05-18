#include <iostream>
using namespace std;

bool strcmpX(char *src, char *dest)
{
    while (*src != '\0' && *dest != '\0')
    {

        if (*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if (*src == '\0' && *dest == '\0')
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
    char Arr[20];
    char Brr[20];
    bool bRet;
    cout << "enter first string" << endl;
    cin.getline(Arr, 20);
    cout << "enter second string" << endl;
    cin.getline(Brr, 20);
    bRet = strcmpX(Arr, Brr);
    if (bRet == true)
    {
        cout << "strings are equal" << endl;
    }
    else if (bRet == false)
    {
        cout << "Strings are not equal" << endl;
    }
    return 0;
}