#include <iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    cout << "enter first string" << endl;
    cin.getline(Arr, 20);
    cout << "enter second string" << endl;
    cin.getline(Brr, 20);
    strcatX(Arr, Brr);
    cout << "string after concatination :" << Brr << endl;
    return 0;
}