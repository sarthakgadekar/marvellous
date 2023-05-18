#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fname[20];
	int fd=0,iRet=0;
	char Data[10];
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	fd=open(fname,O_RDWR);
	
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return -1;
	}
	
	printf("File opened succesfully with fd %d",fd);
	printf("\nData from file is : ");
	while((iRet=(read(fd,Data,sizeof(Data))))!=0)
	{
		write(1,Data,iRet);
	}
	return 0;
	
}
	