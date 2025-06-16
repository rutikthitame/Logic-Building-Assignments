#include <stdio.h>

void Display(char ch)
{
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
    {
        printf("Decimal : %7d\n",ch);
        printf("Octal : %03o\n",ch);
        printf("Hexadecimal : 0x%02x\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}