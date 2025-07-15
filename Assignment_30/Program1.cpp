#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
    UINT iMask = 16384;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return (iResult == iMask);
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"15th bit is ON";
    }
    else
    {
        cout<<"15th bit is OFF";
    }

    return 0;


}