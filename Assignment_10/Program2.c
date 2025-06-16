#include <stdio.h>



int CountOdd(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    while(iNo != 0)
    {
        if((iNo % 10 ) % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo /10;
        
    }
    return iCnt;
    
        
}
int main()
{
    
   int iValue = 0;
   int iRet = 0;

   printf("Enetr number : \n");
   scanf("%d",&iValue);
    
   iRet = CountOdd(iValue);
   printf("%d\n",iRet);
   

    return 0;
}