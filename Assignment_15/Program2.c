#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    for(iCnt1 = 1; iCnt1 <= iRow ; iCnt1++)
    {
        for(iCnt2 = iCol; iCnt2 >= 1; iCnt2--)
        {
           if(iCnt2 >= iCnt1)
           {
            printf("*\t");
           }
           else
           {
            printf("#\t");
           }
        }
            printf("\n");

    }

}
int main()
{
    
   int iValue1 = 0, iValue2 = 0;

   printf("Enetr number Rows : \n");
   scanf("%d",&iValue1);

   printf("Enetr number Columns : \n");
   scanf("%d",&iValue2);

    
   Pattern(iValue1, iValue2);



    return 0;
}