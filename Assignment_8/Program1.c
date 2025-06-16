#include <stdio.h>

double CircleArea(float iRadius)
{
    float PI = 3.14f;
    double dArea = 0;

    dArea = PI * iRadius * iRadius;

    return dArea;
    
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf(" Area of circle is: %f\n",dRet);

    return 0;

}