#include<iostream>

using namespace std;

int Min(int iValue)
{
	static int iMin=iValue%10,iDigit=0;
	if(iValue!=0)
	{
		iDigit=iValue%10;
		
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		
		iValue=iValue/10;
		Min(iValue);
	}
	return iMin;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=Min(iValue);
	cout<<"\nMinimum digit in "<<iValue<<" is "<<iRet;
	return 0;
}
	