#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    if(iNo > i)
    {
        printf("%d\t",iNo);
        iNo = iNo - 1;
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