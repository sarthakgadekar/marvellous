#include <iostream>
using namespace std;

void strToggleX(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    strToggleX(Arr);
    cout << "toggled string is :" << Arr << endl;
}