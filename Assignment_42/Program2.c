#include<stdio.h>

int Sum(int iNo)
{
    static int iDigit = 0;
    static int iSum = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
        Sum(iNo);
    }
    printf("\n");
    return iSum;
    
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Sum(iValue);
    printf("Summation is : %d\n",iRet);

    return 0;
}