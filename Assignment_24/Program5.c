#include <stdio.h>
#include<stdbool.h>



void Reverse(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        printf("%c",*str);
        str--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    Reverse(arr);

    

    return 0;
}