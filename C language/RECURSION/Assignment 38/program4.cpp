#include<iostream>

using namespace std;

int Fact(int iValue)
{
	static int iMul=1;
	if(iValue!=0)
	{
		iMul=iMul*iValue;
		iValue--;
		Fact(iValue);
	}
	return iMul;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=Fact(iValue);
	cout<<"\nFactorial of "<<iValue<<" is "<<iRet;
	return 0;
}
	