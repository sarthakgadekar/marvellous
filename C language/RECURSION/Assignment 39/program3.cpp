#include<iostream>

using namespace std;

int Small(char arr[])
{
	static int count=0;
	if(*arr!='\0')
	{
		if((*arr>='a')&&(*arr<='z'))
		{
			count++;
		}
		arr++;
		Small(arr);
	}
	return count;
}

int main()
{
	char arr[20];
	int iRet=0;
	
	cout<<"\nEnter string : ";
	cin.getline(arr,20);
	
	iRet=Small(arr);
	cout<<"\nno of small character is "<<iRet;
	return 0;
}
	