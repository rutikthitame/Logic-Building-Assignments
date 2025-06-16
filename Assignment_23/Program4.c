#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0


bool ChkSpecial(char ch)
{
    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
    
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character : ");
    scanf(" %c",&cValue);

    bRet = ChkSpecial(cValue);
    if(bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}