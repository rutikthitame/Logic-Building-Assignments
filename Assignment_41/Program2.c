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
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);    
    
    Display(iValue);

    return 0;
}