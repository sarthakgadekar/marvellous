#include <iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z')) /* if ((*str >= '65') && (*str <= '90'))
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
    int iLen = CountSmall(Arr);
    cout << "count of small letter in string is " << iLen << endl;
}