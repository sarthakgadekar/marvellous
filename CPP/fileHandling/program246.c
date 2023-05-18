#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int CountSmall(char Fname[])
{
    int iSum = 0 ,i=0, iCnt=0;
    char Data[10];
    int iRet = 0;
    int fd = 0;
    fd = open(Fname, O_RDWR);
    if (fd == -1)
    {
        printf("unable to open the file\n");
        return -1;
    }
    printf("file is successfully opened with FD %d\n", fd);

    while ((iRet = read(fd, Data, sizeof(Data))) != 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if(Data[i] >='a' && Data[i]<='z' )
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet = 0;
    printf("Enter file name to open\n");
    scanf("%s", Fname);
    iRet = CountSmall(Fname);
    printf("no of small characters : %d\n", iRet);
    return 0;
}