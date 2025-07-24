#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    if(i <= iNo)
    {
        printf("%d\t",i);
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