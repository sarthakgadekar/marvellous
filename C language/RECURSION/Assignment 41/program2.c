#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FILESIZE 1024

int CountSmall(char Fname[])
{
	int fd=0,iRet=0,count=0;
	char Data[FILESIZE];
	int iCnt=0;
	
	fd=open(Fname,O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return -1;
	}
	
	printf("\nFile opened succesfully");
	
	while((iRet=read(fd,Data,FILESIZE))!=0)
	{
		for(iCnt=0;iCnt<iRet;iCnt++)
		{
			if((Data[0]>='a')&&(Data[0]<='z'))
			{
				count++;
			}
		}
	}
	
	return count;
}

int main()
{
	char fname[20];
	char Data[1];
	int iRet=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	iRet=CountSmall(fname);
	
	printf("\nNumber of small character in file is %d",iRet);

	return 0;
	
}
	