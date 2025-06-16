#include <stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
    
}

int main()
{
    float fValue1 = 0, fValue2 = 0;
    double dRet = 0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf(" Area of circle is: %f\n",dRet);

    return 0;

}