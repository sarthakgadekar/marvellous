#include<iostream>
using namespace std;

int Difference(char *str)
{
    int cntCapital=0;
    int cntSmall=0;
    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            cntCapital++;
        }
        else if(*str>='a' && *str<='z')
        {
            cntSmall++;
        }
        str++;
    }
    return cntSmall-cntCapital;
}
int main()
{
    char Arr[30];
    cout<<"Enter a string"<<endl;
    cin.getline(Arr,30);
    int iRet=Difference(Arr);
    cout<<"difference between small and capital "<<iRet<<endl;
    return 0;
}