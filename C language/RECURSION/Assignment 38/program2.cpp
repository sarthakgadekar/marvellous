#include<iostream>

using namespace std;

int Sum(int iValue)
{
	static int isum=0,iDigit=0;
	if(iValue!=0)
	{
		iDigit=iValue%10;
		isum=isum+iDigit;
		iValue=iValue/10;
		Sum(iValue);
	}
	return isum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter value : ";
	cin>>iValue;
	iRet=Sum(iValue);
	cout<<"\nSummation is "<<iRet;
	return 0;
}
	