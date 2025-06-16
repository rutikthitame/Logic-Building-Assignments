#include <stdio.h>

void strRevX(char *str)
{
    int iCount = 0, iCnt = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    for(iCnt = iCount; iCnt > 0; iCnt--,str--)
    {
        printf("%c",*str);
    }
    printf("\n");
}
int main()
{
    char arr[50] = {'\0'};
    

    printf("Enter string: \n");
    scanf("%[^\n]s",arr);

    strRevX(arr);
    

    return 0;

}