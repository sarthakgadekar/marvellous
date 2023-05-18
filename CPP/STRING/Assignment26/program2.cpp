#include <iostream>
using namespace std;
int chkCharacter(char *str, char ch)
{
    int count=0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char Arr[30], ch;
    cout << "enter string : ";
    cin.getline(Arr, 30);
    cout << "enter a character" << endl;
    cin >> ch;
    int bRet=chkCharacter(Arr, ch);
    cout<<"frequency of "<<ch<<" is "<<bRet<<endl;
    return 0;
}