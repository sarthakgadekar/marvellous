#include <iostream>
using namespace std;

int Count_l(char str[])
{

    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == 'l')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    int iLen = Count_l(Arr);
    cout << "no of l in given string is " << iLen << endl;
}