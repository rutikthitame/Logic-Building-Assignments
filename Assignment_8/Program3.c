#include <stdio.h>

int KMToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    printf(" Distance in meter is : %d\n",iRet);

    return 0;

}