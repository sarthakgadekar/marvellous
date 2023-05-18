#include <iostream>
using namespace std;

void Display(int iNo)
{
  if(iNo==0)
  {
    return;
  }
  cout<<iNo<<"  ";
  Display(iNo-1);
}
int main()
{
    int iValue = 0;
    cin >> iValue;
    Display(iValue);
    return 0;
}