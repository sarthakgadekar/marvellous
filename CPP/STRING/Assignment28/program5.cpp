#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

void StrCpy(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
            dest++;
            src++;
        }

        else if (*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
            dest++;
            src++;
        }
    }

    *dest = '\0';
    return;
}
int main()
{
    char Arr[300];
    char Brr[300];
    cout << "enter string" << endl;
    cin.getline(Arr, 300);
    StrCpy(Arr, Brr);
    cout << "String copied and converted small to capital :" << Brr << endl;
    return 0;
}
