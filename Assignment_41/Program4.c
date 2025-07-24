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
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}