#include<stdio.h>

int WhiteSpace(char *str)
{
    static int i = 0;
    static int iCount = 0;
    if(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            iCount++;
        }
        i++;
        WhiteSpace(str);
    }
    return iCount;
    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%s",&arr);
    
    iRet = WhiteSpace(arr);
    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}