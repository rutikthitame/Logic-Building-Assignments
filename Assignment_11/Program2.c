#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
    printf("\n");

}
int main()
{
    
   int iValue = 0;

   printf("Enetr number : \n");
   scanf("%d",&iValue);
    
   Pattern(iValue);



    return 0;
}