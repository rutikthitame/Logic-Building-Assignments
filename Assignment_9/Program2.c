#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0



bool ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        if((iNo % 10 ) == 0)
        {
            return TRUE;
        }
        iNo = iNo /10;
        
    }
    return FALSE;
    
        
}
int main()
{
    
   int iValue = 0;
   bool bRet = FALSE;

   printf("Enetr number : \n");
   scanf("%d",&iValue);
    
   bRet = ChkZero(iValue);

   if(bRet == TRUE)
   {
        printf("It contains zero ");
   }
   else
   {
        printf("There is no zero");
   }


    return 0;
}