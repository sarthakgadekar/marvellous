#include<iostream>

using namespace std;

int WhiteSpace(char arr[])
{
	static int count=0;
	if(*arr!='\0')
	{
		if(*arr==' ')
		{
			count++;
		}
		arr++;
		WhiteSpace(arr);
	}
	return count;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	cout<<"\nEnter string : ";
	cin.getline(arr,20);
	
	iRet=WhiteSpace(arr);
	cout<<"\nno of whitespace is "<<iRet;
	return 0;
}
	