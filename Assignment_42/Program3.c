#include<stdio.h>

int Strlen(char *str)
{
    static int i = 0;
    if(str[i] != '\0')
    {
        i++;
        Strlen(str);
    }
    return i;
    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%s",&arr);
    
    iRet = Strlen(arr);
    printf("Number of characters are : %d\n",iRet);

    return 0;
}