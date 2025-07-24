#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'A';
    if(i <= iNo)
    {
        printf("%c\t",ch);
        i++;
        ch++;
        Display(iNo);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 5;
    Display(iValue);

    return 0;
}