#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FILESIZE 1024

void DisplayN(char Fname[],int iNo)
{
	int fd=0,iRet=0,count=0;
	char Data[FILESIZE];
	fd=open(Fname,O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return ;
	}
	
	printf("\nFile opened succesfully\n");
	
	iRet=read(fd,Data,iNo);
	
	write(1,Data,iRet);
	
}

int main()
{
	char fname[20];
	char Data[1];
	int iValue=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	
	printf("\nEnter the number of chracter which you want to read : ");
	scanf("%d",&iValue);
	
	DisplayN(fname,iValue);

	return 0;
	
}
	