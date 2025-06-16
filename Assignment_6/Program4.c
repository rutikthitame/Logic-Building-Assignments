#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt != 11)
    {
        iMult = iCnt * iNo;
        printf("%d\n",iMult);
        iCnt++;
    }
    
    
    

}

int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}