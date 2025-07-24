#include<stdio.h>

int Max(int iNo)
{
    static int iDigit = 0;
    static int iMax = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        Max(iNo);
    }
    return iMax;
    
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Max(iValue);
    printf("Largest Number is : %d\n",iRet);

    return 0;
}