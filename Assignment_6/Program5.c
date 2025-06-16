#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 10;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt != 0)
    {
        iMult = iCnt * iNo;
        printf("%d\n",iMult);
        iCnt--;
    }
    
    
    

}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    TableRev(iValue);


    return 0;
}