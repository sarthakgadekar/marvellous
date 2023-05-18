#include <iostream>
using namespace std;

void strcpyX(char *src,char *dest)
{
   while(*src != '\0')
   {
       *dest=*src;
       dest++;
       src++;
   }
   *dest='\0';

}
int main()
{
    char Arr[20];
    char Brr[20];
    cout << "enter string" << endl;
    cin.getline(Arr, 20);
    strcpyX(Arr,Brr);
    cout << "string after copy :" << Brr << endl;
}