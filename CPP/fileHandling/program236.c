
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

//O_RDONLY Read
//O_WRONLY write
//O_RDWR

int main()
{
    char Fname[20];
    int fd=0;       //file descriptor
    printf("Enter file name to open\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to create the file\n");
        return -1;
    }
    printf("file is successfully opened with FD %d\n",fd);
    return 0;
}