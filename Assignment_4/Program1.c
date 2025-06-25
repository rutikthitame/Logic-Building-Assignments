#include <stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);

    return 0;
}
