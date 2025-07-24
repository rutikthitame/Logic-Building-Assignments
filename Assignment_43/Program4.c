#include<stdio.h>

int Min(int iNo)
{
    static int iDigit = 0;
    static int iMin = 9;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        Min(iNo);
    }
    return iMin;
    
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Min(iValue);
    printf("Smallest Number is : %d\n",iRet);

    return 0;
}