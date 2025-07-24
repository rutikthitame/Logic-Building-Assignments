#include<stdio.h>

int Factorial(int iNo)
{
    static int i = 1;
    static int iFact = 1;
    if(i <= iNo)
    {
        iFact = iFact * i;
        i++;
        Factorial(iNo);
    }
    printf("\n");
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}