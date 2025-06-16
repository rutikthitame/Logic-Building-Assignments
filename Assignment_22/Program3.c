#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkDigit(char ch)
{
    if(((ch >= '0') && (ch <= '9')))
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

    bRet = ChkDigit(cValue);
    if(bRet == TRUE)
    {
        printf("It is a Digit\n");
    }
    else 
    {
        printf("It is not a Digit\n");
    }

    return 0;
}