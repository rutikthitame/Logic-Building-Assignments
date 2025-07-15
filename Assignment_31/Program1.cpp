#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OffBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iResult = 0;

    iResult = iNo & iMask1;

    if(iResult == iMask1)
    {
        iNo = iNo & (~iMask1);
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