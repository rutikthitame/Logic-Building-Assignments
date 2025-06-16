#include <stdio.h>
#include<stdbool.h>



bool ChkVowel(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a'|| *str == 'E' || *str == 'e' || *str == 'I' || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u')
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
    bool bRet = false;

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}