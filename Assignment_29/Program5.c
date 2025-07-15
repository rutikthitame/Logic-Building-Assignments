#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


#define BUFFER_SIZE 1024
void Display(char Fname[],int iSize)
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0,iCnt = 0;

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
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                printf("%c",Buffer[iCnt]);
            }
        }
        printf("\n");
        close(fd);
    }
}

int main()
{
    char FileName[20];
    int iValue = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter number of character to display : \n");
    scanf(" %d",&iValue);
    
    Display(FileName,iValue);


    return 0;
}