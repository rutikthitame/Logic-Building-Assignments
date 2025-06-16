#include <stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int i = 1;
    int iCnt = 0;

    while(iCnt < iNo)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
            iCnt++;
        }
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
