#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iStart,int iEnd)
{
    UINT iMask = 1;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = 1    << (iCnt-1);

        iNo = iNo ^ iMask;
    }
    return iNo;
    
}

int main()
{
    UINT iValue = 0,iPos1 = 0, iPos2 = 0,iRet = 0;

    cout << "Enter number : ";
    cin >> iValue;

    cout << "Enter first position : ";
    cin >> iPos1;

    cout << "Enter second position : ";
    cin >> iPos2;

    iRet = ToggleBit(iValue,iPos1,iPos2);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}
