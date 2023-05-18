#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20];
	int fd=0,iRet=0;
	char Data[100];
	int size=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR | O_APPEND);
	
	
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return -1;
	}
	
	printf("File opened succesfully with fd %d",fd);
	
	printf("\nEnter the data that you want to write in a file : ");
	scanf(" %[^'\n']s",Data);
	
	iRet=write(fd,Data,strlen(Data));

	
	printf("\n%d bytes write in a file",iRet);
	return 0;
	
}
	