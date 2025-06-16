#include <stdio.h>



void StrToggle(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            printf("%c",*str + 32);
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            printf("%c",*str - 32);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    StrToggle(arr);

    

    return 0;
}