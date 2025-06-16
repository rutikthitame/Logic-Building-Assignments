#include <stdio.h>

void Pattern(int iNo)
{
    char iChar = 'A';
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",iChar);
        iChar++;
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