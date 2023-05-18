#include<iostream>

using namespace std;

int Strlen(char arr[])
{
	static int count=0;
	if(*arr!='\0')
	{
		count++;
		arr++;
		Strlen(arr);
	}
	return count;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	cout<<"\nEnter string : ";
	cin.getline(arr,20);
	
	iRet=Strlen(arr);
	cout<<"\nCount of character is "<<iRet;
	return 0;
}
	