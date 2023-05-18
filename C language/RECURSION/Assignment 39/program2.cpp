#include<iostream>

using namespace std;

int Max(int iValue)
{
	static int iMax=0,iDigit=0;
	if(iValue!=0)
	{
		iDigit=iValue%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		
		iValue=iValue/10;
		Max(iValue);
	}
	return iMax;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=Max(iValue);
	cout<<"\nMaximum digit in "<<iValue<<" is "<<iRet;
	return 0;
}
	