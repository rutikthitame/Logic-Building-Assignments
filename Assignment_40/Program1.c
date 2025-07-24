#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    if(i < iNo)
    {
        printf("*\t");
        i++;
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