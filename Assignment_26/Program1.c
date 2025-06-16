#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if((*str == ch))
        {
            return true;
        }
        
        str++;
    }
    return false;
}

int main()
{
    char arr[20]; 
    char cVAlue = '\0';
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    printf("Enetr character : ");
    scanf(" %c",&cVAlue);

    bRet = ChkChar(arr,cVAlue);
    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    

    return 0;
}