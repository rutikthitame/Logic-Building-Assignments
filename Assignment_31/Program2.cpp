#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 = 512;
    UINT iResult1 = 0;
    UINT iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if(iResult1 == iMask1 && iResult2 == iMask2)
    {
        iNo = iNo & (~iMask1);
        iNo = iNo & (~iMask2);
        return iNo;
    }

    
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

   
    return 0;


}