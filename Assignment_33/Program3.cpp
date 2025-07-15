#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 256 | 2048;
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
    UINT iValue = 0;
    bool bRet = false;

    cout << "Enter number : ";
    cin >> iValue;

    bRet = ChkBit(iValue);

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
