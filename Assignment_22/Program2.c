#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool ChkCapital(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')))
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

    bRet = ChkCapital(cValue);
    if(bRet == TRUE)
    {
        printf("It is a capital character\n");
    }
    else 
    {
        printf("It is not a capital character\n");
    }

    return 0;
}