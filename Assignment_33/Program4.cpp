#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1,int iPos2)
{
    UINT iMask = 1;
    iMask = iMask << (iPos1-1) | iMask << (iPos2-1) ;
    bool bFlag = true;

    if((iNo & iMask) != 0)
    {
        return bFlag;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
    
}

int main()
{
    UINT iValue = 0,iPos1 = 0, iPos2 = 0;
    bool bRet = false;

    cout << "Enter number : ";
    cin >> iValue;

    cout << "Enter fist position : ";
    cin >> iPos1;

    cout << "Enter second position : ";
    cin >> iPos2;

    bRet = ChkBit(iValue,iPos1,iPos2);

    if(bRet == true)
    {
        cout<<"TRUE\n";
    }
    else
    {
        cout<<"FALSE\n";
    }

    

    return 0;
}
