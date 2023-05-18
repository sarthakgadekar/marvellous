#include<iostream>

using namespace std;

void Display(int iValue)
{
	if(iValue!=0)
	{
		cout<<iValue<<" * ";
	
		iValue--;
		Display(iValue);
	}
}

int main()
{
	int iValue=0;
	
	cout<<"\nEnter value : ";
	cin>>iValue;
	Display(iValue);
	return 0;
}
	