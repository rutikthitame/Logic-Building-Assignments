#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkAlpha(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("It is a character\n");
    }
    else 
    {
        printf("It is not a character\n");
    }

    return 0;
}