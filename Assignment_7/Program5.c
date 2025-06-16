#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iFact1 = 1,iFact2 = 1, iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else if(iCnt % 2 != 0)
        {
            iFact2 = iFact2 * iCnt;
        }

        iDiff = iFact1 - iFact2;
      
    }
    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf(" factorial difference is : %d",iRet);

    return 0;

}