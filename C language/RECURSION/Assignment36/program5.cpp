#include <iostream>
using namespace std;

void Display()
{
    static char ch = 'a';
    if (ch >= 'a' && ch <= 'f')
    {
        printf("%c ", ch);
        ch++;
        Display();
    }
}
int main()
{
    Display();
    return 0;
}