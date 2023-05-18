// take file name from user and create file of that name
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];

    int fd=0;       //file descriptor
    printf("Enter file name to create\n");
    scanf("%s",Fname);

    printf("enter data you want to write\n");
    scanf(" %[^'\n']s",Data);

    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("unable to create the file\n");
        return -1;
    }
    printf("file is successfully created with FD %d\n",fd);
    write(fd,Data,strlen(Data));
    return 0;
}