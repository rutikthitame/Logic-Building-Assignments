#include <stdio.h>

double SuareMeter(int iNo)
{
    double dSquareMeter = 0.0;

    dSquareMeter = iNo * 0.0929;

    return dSquareMeter;
    
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in square feet : ");
    scanf("%d",&iValue);

    dRet = SuareMeter(iValue);
    printf("Area in square meter is: %f\n",dRet);

    return 0;

}