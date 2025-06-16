#include <stdio.h>

int CountDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iEven =0, iOdd = 0, iDigit = 0, iDiff = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }
        else if((iDigit % 2) != 0)
        {
            iOdd = iOdd + iDigit;
        }

        iDiff = iEven - iOdd;
        
    }
    return iDiff;

}
int main()
{
    
   int iValue = 0, iRet = 0;

   printf("Enetr number : \n");
   scanf("%d",&iValue);
    
   iRet = CountDiff(iValue);
   printf("%d",iRet);



    return 0;
}