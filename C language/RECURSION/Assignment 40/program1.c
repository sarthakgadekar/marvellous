#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fname[20];
	int fd=0;
	
	printf("\nEnter the name of file : ");
	scanf("%s",fname);
	
	fd=open(fname,O_RDONLY);
	
	
	if(fd==-1)
	{
		printf("\nUnable to open the file");
		return -1;
	}
	
	printf("File opened succesfully with fd %d",fd);
	return 0;
	
}
	