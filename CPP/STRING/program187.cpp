#include <iostream>
using namespace std;

void strcatX(char *src,char *dest)
{
   while(*src != '\0')
   {
       src++;
   }
   while(*dest != '\0')
   {
       *src=*dest;
       src++;
       dest++;
   }
   *src='\0';

}
int main()
{
    char Arr[20];
    char Brr[20];
    cout << "enter first string" << endl;
    cin.getline(Arr, 20);
    cout << "enter secomd string" << endl;
    cin.getline(Brr, 20);
    strcatX(Arr,Brr);
    cout << "string after concatination :" << Arr << endl;
    return 0;
}