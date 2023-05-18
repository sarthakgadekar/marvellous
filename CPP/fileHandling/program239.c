
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char Fname[20];
    char Data[100];
    int iRet = 0;
    int fd = 0; // file descriptor
    printf("Enter file name to open\n");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR | O_APPEND);
    if (fd == -1)
    {
        printf("unable to open the file\n");
        return -1;
    }
    printf("file is successfully opened with FD %d\n", fd);

    printf("enter the data you want\n");
    scanf(" %[^'\n']s", Data);

    iRet = write(fd, Data, strlen(Data));
    printf("%d bytes gets successfully written in file\n",iRet);
    return 0;
}