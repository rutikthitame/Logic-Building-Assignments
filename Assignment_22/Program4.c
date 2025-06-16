#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkSmall(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enetr Character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);
    if(bRet == TRUE)
    {
        printf("It is a small case character\n");
    }
    else 
    {
        printf("It is not a small case character\n");
    }

    return 0;
}