
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void DisplayData(char Fname[])
{
    char Data[10];
    int iRet = 0;
    int fd = 0;
    fd = open(Fname, O_RDWR);
    if (fd == -1)
    {
        printf("unable to open the file\n");
        return ;
    }
    printf("file is successfully opened with FD %d\n", fd);

    while (iRet = read(fd, Data, sizeof(Data)) != 0)
    {
        write(1, Data, iRet);
    }
    close(fd);
}

int main()
{
    char Fname[20];
    printf("Enter file name to open\n");
    scanf("%s", Fname);
    DisplayData(Fname);
    return 0;
}