#include <iostream>
using namespace std;

void StrCpyInRev(char *src, char *dest)
{
    char *temp=src;
    while (*src != '\0')
    {
        src++;
    }
    src--;
    while (src!=temp)
    {
        *dest = *src;
        dest++;
        src--;
        if(src==temp)
        {
            *dest=*src;
            dest++;
            *dest = '\0';
            break;
        }
    }
}
int main()
{
    char Arr[20];
    char Brr[20];
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    StrCpyInRev(Arr, Brr);
    cout << "String copied in rev order :" << Brr << endl;
}