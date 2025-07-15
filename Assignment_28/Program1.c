#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter file name that you want to open : \n");
    scanf("%s",fname);

    fd = open(fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("file is succesfully opened");
        close(fd);
    } 
    return 0;
}