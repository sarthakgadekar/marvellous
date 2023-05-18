#include<iostream>
using namespace std;

void Display(char str[])
{
    /* int iCnt=0;
    while(str[iCnt] != '\0')
    {
        cout<<str[iCnt]<<endl;
        iCnt++;
    }       
            OR */

    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;

    }
}
int main()
{
    char Arr[]="Hello";
    Display(Arr);
}