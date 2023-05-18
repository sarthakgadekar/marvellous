// take file name from user and create file of that name
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/* 
    READ 4
    WRITE 2
    EXECUTE 1

    permissions 0_owner_group_other
 */

int main()
{
    char Fname[20];
    int fd=0;       //file descriptor
    printf("Enter file name to create\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("unable to create the file\n");
        return -1;
    }
    printf("file is successfully created with FD %d\n",fd);
    return 0;
}