#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define FILESIZE 1024

int CountChar(char Fname[],char ch)
{
	int fd=0,iRet=0,count=0,iCnt=0;
	char Data[FILESIZE];
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
			if(Data[0]==ch)
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
	char ch='\0';
	char Data[1];
	int iRet=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	
	printf("\nEnter the Character : ");
	scanf(" %c",&ch);
	
	iRet=CountChar(fname,ch);
	
	printf("\nNumber of %c in file is %d",ch,iRet);

	return 0;
	
}
	