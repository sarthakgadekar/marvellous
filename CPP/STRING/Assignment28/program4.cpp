#include <iostream>
using namespace std;

void StrCpy(char *src, char *dest)
{

    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src+32;
            dest++;
            src++;
        }

        else
        {
            *dest = *src;
            dest++;
            src++;
        }
        *dest = '\0';
    }
}
int main()
{
    char Arr[20];
    char Brr[20];
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    StrCpy(Arr, Brr);
    cout << "String copied and converted small to capital :" << Brr << endl;
    return 0;
}