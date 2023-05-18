#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fname[20];
	int fd=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	fd=creat(fname,0777);
	
	
	if(fd==-1)
	{
		printf("\nUnable to create the file");
		return -1;
	}
	
	printf("File created succesfully with fd %d",fd);
	return 0;
	
}
	