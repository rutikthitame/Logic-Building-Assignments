#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


#define BUFFER_SIZE 1024
int main()
{
    int fd = 0;
    char fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0,iSum = 0;

    printf("Enter file name : \n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is succesfully opened\n");
        
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("Size of the file is %d bytes\n",iSum);
        close(fd);
    }
    return 0;
}