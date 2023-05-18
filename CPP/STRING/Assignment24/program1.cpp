#include<iostream>
using namespace std;

int CntCapital(char *str)
{
    int count=0;
    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char Arr[30];
    cout<<"Enter a string"<<endl;
    cin.getline(Arr,30);
    int iRet=CntCapital(Arr);
    cout<<"capital count is "<<iRet<<endl;
    return 0;
}