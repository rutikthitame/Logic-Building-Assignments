#include<stdio.h>

int Reverse(int iNo)
{
    static int iDigit = 0,iRev = 1;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iRev == 1)
        {
            iRev = (iRev*10)-10 + iDigit;
        }
        else
        {
            iRev = iRev*10 + iDigit;
        }
        Reverse(iNo);
    }
    return iRev;
    
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);
    printf("Reverse Number is : %d\n",iRet);

    return 0;
}