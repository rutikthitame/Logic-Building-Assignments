#include<stdio.h>

int Small(char *str)
{
    static int i = 0;
    static int iCount = 0;
    if(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
        {
            iCount++;
        }
        i++;
        Small(str);
    }
    return iCount;
    
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%s",&arr);
    
    iRet = Small(arr);
    printf("Number of small character are : %d\n",iRet);

    return 0;
}