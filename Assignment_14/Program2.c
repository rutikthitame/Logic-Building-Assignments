#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iNum = 1;
    for(iCnt1 = 1; iCnt1 <= iRow ; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if(iCnt1 % 2 == 0)
            {
                while(iNum % 2 ==0)
                {
                    printf("%d\t",iNum);
                }
                iNum++;


            }
            else
            {
                while(iNum % 2 !=0)
                {
                    printf("%d\t",iNum);
                }
                iNum++;

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