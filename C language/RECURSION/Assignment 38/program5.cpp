#include<iostream>

using namespace std;

int Mult(int iValue)
{
	static int iMul=1,iDigit=0;
	if(iValue!=0)
	{
		iDigit=iValue%10;
		iMul=iMul*iDigit;
		iValue=iValue/10;
		Mult(iValue);
	}
	return iMul;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=Mult(iValue);
	cout<<"\nMultiplication of digit in "<<iValue<<" is "<<iRet;
	return 0;
}
	