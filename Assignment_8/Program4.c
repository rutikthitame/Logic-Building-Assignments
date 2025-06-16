#include <stdio.h>

double FhToCs(float fTemp)
{
    double dTemp = 0.0;

    dTemp = ((fTemp - 32) * (5.0/9.0));

    return dTemp;
    
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Temperature : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("Temperature in Celcius  is: %f\n",dRet);

    return 0;

}