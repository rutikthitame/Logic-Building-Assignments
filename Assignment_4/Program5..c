#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for ( iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iFactSum += iCnt;
        }
        else
        {
            iNonFactSum += iCnt;
        }
    }

    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
