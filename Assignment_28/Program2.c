#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fname[20] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",fname);

    fd = creat(fname,0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("file is succesfully created\n");
        close(fd);
    }
    return 0;
}