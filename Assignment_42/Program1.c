#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    if(iNo > i)
    {
        printf("%d\t*\t",iNo);
        iNo = iNo - 1;
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