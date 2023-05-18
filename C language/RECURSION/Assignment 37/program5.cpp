#include<iostream>

using namespace std;

void Display(int iValue)
{
	static char ch='a';
	if(iValue!=0)
	{
		cout<<ch<<" ";
		ch++;
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
	