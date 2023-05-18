#include<iostream>
using namespace std;

int strlenX(char str[])
{

    int iCnt=0;
    while(*str != '\0')
    {
        iCnt++;
        str++;

    }
    return iCnt;
}
int main()
{
    char Arr[20];
    cout<<"enter string"<<endl;
    cin.getline(Arr,20);         
    int iLen=strlenX(Arr);
    cout<<"length of string is "<<iLen<<endl;
}