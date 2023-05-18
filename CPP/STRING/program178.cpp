#include <iostream>
using namespace std;

int CountWhiteSpace(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str==' '))
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
    int iLen = CountWhiteSpace(Arr);
    cout << "count of whitespaces in string is " << iLen << endl;
}