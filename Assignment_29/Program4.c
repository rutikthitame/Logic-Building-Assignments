#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024
int CountChar(char Fname[],char chValue)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0,iCount = 0,iCnt = 0;

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is succesfully opened\n");
        
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0;iCnt < iRet;iCnt++)
            {
                if((Buffer[iCnt] >= chValue))
                {
                    iCount++;
                }
            }
        }
        close(fd);
        return iCount;
    }
}

int main()
{
    char FileName[20],chValue = '\0';
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter character : \n");
    scanf(" %c",chValue);
    
    iRet = CountChar(FileName,chValue);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}