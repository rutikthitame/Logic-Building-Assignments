#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == ch))
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20]; 
    char cVAlue = '\0';
    int iRet = 0;
    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    printf("Enetr character : ");
    scanf(" %c",&cVAlue);

    iRet = CountChar(arr,cVAlue);
    printf("Character Frequency is : %d\n",iRet);

    return 0;
}