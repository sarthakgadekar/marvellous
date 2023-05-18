#include<iostream>
using namespace std;

void Display()
{
    static char ch='A';
    if(ch>='A' && ch<='F')
    {
        printf("%c ",ch);
        ch++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}