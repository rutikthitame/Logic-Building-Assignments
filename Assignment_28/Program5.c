#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    int fd = 0;
    char fname[20] = {'\0'};
    char Buffer[] = "Hello World";

    printf("Enter file name : \n");
    scanf("%s",fname);

    fd = open(fname,O_RDWR | O_APPEND);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is succesfully opened\n");
        
        fd = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes written succesfully\n",fd);
        
        close(fd);
    }
    return 0;
}