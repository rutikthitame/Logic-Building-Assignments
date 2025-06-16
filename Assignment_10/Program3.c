#include <stdio.h>



int CountRange(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    while(iNo != 0)
    {
        if(((iNo % 10 ) <= 7) && ((iNo % 10 ) >= 3))
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
    
   iRet = CountRange(iValue);
   printf("%d\n",iRet);
   

    return 0;
}