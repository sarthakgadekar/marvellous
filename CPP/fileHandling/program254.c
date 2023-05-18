#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>

#define FILESIZE 1024

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[10];

    printf("enter the file name\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("unable to open file\n");
        return -1;
    }

    /*  0 starting point
        1 current position
        2 end point 
    */

    lseek(fd, 10, 0);       //(kashat,kiti,kuthun)
    read(fd,Data,5);
    write(1,Data,5);
    return 0;
}