#include <stdio.h>



void Strlwrx(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            printf("%c",*str + 32);
        }
        else
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    Strlwrx(arr);

    

    return 0;
}