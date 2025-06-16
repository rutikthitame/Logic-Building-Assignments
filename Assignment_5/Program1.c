#include <stdio.h>

void Pattern(int iNo)
{
    if (iNo < 0)  
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
