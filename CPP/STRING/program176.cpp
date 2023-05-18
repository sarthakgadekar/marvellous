#include <iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z')) /* if ((*str >= '65') && (*str <= '90'))
                                                DON'T USE ASCII values*/
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
    int iLen = CountCapital(Arr);
    cout << "count of capital letter in string is " << iLen << endl;
}