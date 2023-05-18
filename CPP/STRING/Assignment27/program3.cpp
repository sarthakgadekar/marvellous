#include <iostream>
using namespace std;

void StrCpyCapital(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest=*src;
            src++;
            dest++;
        }
        else
        {
            src++;
        }
    }
    *dest='\0';
}
int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    StrCpyCapital(Arr, Brr);
    cout << "capital characters :" << Brr << endl;
}