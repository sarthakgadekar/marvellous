#include <iostream>
using namespace std;

void strcpyX(char *src, char *dest, int no)
{
    int count = 0;
    char *str = src;
    while (*str != '\0')
    {
        str++;
        count++;
    }

    if (no >= count)
    {
        while (*src != '\0')
        {

            *dest = *src;
            dest++;
            src++;
        }
        *dest = '\0';
        return;
    }
    else
    {
        char *store=src+no;
        while (src != store)
        {

            *dest = *src;
            dest++;
            src++;
        }
        *dest = '\0';
        return;
    }
}
int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    cout << "enter number of characters you have to copy into another char Array" << endl;
    cin >> iNo;
    strcpyX(Arr, Brr, iNo);
    cout << "string after copy :" << Brr << endl;
}