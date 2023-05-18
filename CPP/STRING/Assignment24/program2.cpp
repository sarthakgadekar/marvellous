#include<iostream>
using namespace std;

int CntSmall(char *str)
{
    int count=0;
    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
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
    int iRet=CntSmall(Arr);
    cout<<"small count is "<<iRet<<endl;
    return 0;
}