#include<iostream>
using namespace std;

void ReverseInPlace(char *str)
{
    char *start=str;
    char *end=str;
    char temp='\0';
    while(*end != '\0')
    {
        end++;
    }
    end--;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }


}
int main()
{
    char Arr[30];
    cin.getline(Arr,30);
    ReverseInPlace(Arr);
    cout<<Arr<<endl;
    return 0;
}