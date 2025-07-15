#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024
int CountCapital(char Fname[])
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRead = 0,iCount = 0,iCnt = 0;

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is succesfully opened\n");
        
        while((iRead = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0;iCnt < iRead;iCnt++)
            {
                if((Buffer[iCnt] >='A') && (Buffer[iCnt] <= 'Z'))
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
    char FileName[20];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);
    
    iRet = CountCapital(FileName);

    printf("Number of capital characters are : %d\n",iRet);

    return 0;
}