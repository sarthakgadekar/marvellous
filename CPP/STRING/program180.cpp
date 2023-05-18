#include <iostream>
using namespace std;

void strupr(char str[])
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if((*str>='a') && (*str <='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}

int main()
    {
        char Arr[20];
        cout << "enter string" << endl;
        cin.getline(Arr, 20);
        strupr(Arr);
        cout<<"String in upper Case :"<<Arr<<endl;
    }