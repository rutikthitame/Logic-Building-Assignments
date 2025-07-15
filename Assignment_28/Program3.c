#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};
    char Buffer[50] = {'\0'};
    int iRet = 0;

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
        
        while((iRet = read(fd,Buffer,10)) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',10);
        }
        printf("\n");
        close(fd);
    }
    return 0;
}