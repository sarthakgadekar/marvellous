#include<iostream>

using namespace std;

int Reverse(int iValue)
{
	static int iMin=iValue%10,iDigit=0,iNo;
	if(iValue!=0)
	{
		iDigit=iValue%10;
		iNo=iNo*10+iDigit;
		iValue=iValue/10;
		Reverse(iValue);
	}
	return iNo;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=Reverse(iValue);
	cout<<"\nReverse numberif "<<iRet;
	return 0;
}
	