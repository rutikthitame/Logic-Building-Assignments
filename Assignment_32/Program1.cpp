#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask1 = 1;
    UINT iCnt = 0;  
    UINT iResult = 0; 
    bool bFlag = true; 

    for(iCnt = 1; iCnt < iPos; iCnt++)
    {
        iMask1 = iMask1 * 2;
    }

    iResult = iNo & iMask1;
    if(iResult == iMask1)
    {
        return bFlag;
    }
    else
    {
        return bFlag = false;
    }
    return bFlag;
}

int main()
{
    int iValue = 0,iPos = 0;
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter position : ";
    cin>>iPos;

    bRet = ChkBit(iValue,iPos);

    if(bRet == true)
    {
        cout<<"Bit at position "<<iPos<<" is ON\n";
    }
    else
    {
        cout<<"Bit at position "<<iPos<<" is OFF\n";

    }

   
    return 0;


}