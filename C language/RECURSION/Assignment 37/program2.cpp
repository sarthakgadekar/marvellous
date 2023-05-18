#include<iostream>

using namespace std;

void Display(int iValue)
{
	static int iCnt=1;
	
	if(iCnt<=iValue)
	{
		cout<<iCnt<<"\t";
		iCnt++;
		
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
	