#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fname[20];
	int fd=0,iRet=0;
	char Data[1024];
	int size=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR);
	
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return -1;
	}
	
	printf("File opened succesfully with fd %d",fd);
	
	while((iRet=(read(fd,Data,sizeof(Data))))!=0)
	{
		size=size+iRet;
	}
	
	printf("\nSize of file is %d bytes",size);
	return 0;
	
}
	