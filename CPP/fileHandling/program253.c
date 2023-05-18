#include <stdio.h>
#include<string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>

#define FILESIZE 1024

bool FileCompare(char Source[], char Destination[])
{
    int FDsrc = 0;
    int FDdest = 0;
    
    int iRet1 = 0;
    int iRet2 = 0;

    int iCmp=0;
    char Buffer1[FILESIZE];
    char Buffer2[FILESIZE];

    FDsrc = open(Source, O_RDONLY);
    if (FDsrc == -1)
    {
        printf("unable to open source file\n");
        return false;
    }

    FDdest = open(Destination, O_RDONLY);
    if (FDdest == -1)
    {
        printf("unable to open destination file\n");
        return false;
    }

    
    while(1)
    {
        iRet1=read(FDsrc,Buffer1,FILESIZE);
        iRet2=read(FDdest,Buffer2,FILESIZE);

        if((iRet1==0) || (iRet2==0) || (iRet1 != iRet2))
        {
            break;
        }

        iCmp=memcmp(Buffer1,Buffer2,iRet1);

        if(iCmp !=0)
        {
            break;
        }
    }

    if(iRet1==0 && iRet2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    close(FDsrc);
    close(FDdest);
}

int main()
{
    char Fname1[20];
    char Fname2[20];

    printf("enter the file name\n");
    scanf("%[^'\n']s", Fname1);

    printf("enter the file name\n");
    scanf(" %[^'\n']s", Fname2);

    bool bRet=FileCompare(Fname1, Fname2);
    if(bRet==true)
    {
        printf("files are identical\n");
    }
    else
    {
        printf("files are not identical\n");
    }

    return 0;
}