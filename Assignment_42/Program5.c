#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit = 0;
    static int iMult = 1;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iMult = iMult * iDigit;
        Mult(iNo);
    }
    printf("\n");
    return iMult;
    
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Mult(iValue);
    printf("Mutiplication is : %d\n",iRet);

    return 0;
}