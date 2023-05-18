#include <iostream>
using namespace std;
int firstOccurence(char *str, char ch)
{
    int count = -1;
    while (*str != '\0')
    {
        count++;
        if (*str == ch)
        {
            break;
        }
        str++;
    }
    if (*str == '\0')
    {
        return -1;
    }
    else
        return count;
}
int main()
{
    char Arr[30], ch;
    cout << "enter string : ";
    cin.getline(Arr, 30);
    cout << "enter a character" << endl;
    cin >> ch;
    int iRet = firstOccurence(Arr, ch);
    cout <<iRet;
    return 0;
}