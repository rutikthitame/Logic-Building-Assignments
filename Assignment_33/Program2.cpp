#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iMask = 1;
    UINT iCnt = 1;
    UINT iCommon = 0;
    iCommon = iNo1 & iNo2;

    while (iCommon != 0)
    {
        if (iCommon & iMask)
        {
            cout << iCnt << "\t";
        }
        iCnt++;
        iCommon = iCommon >> 1;
    }
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;

    cout << "Enter first number : ";
    cin >> iValue1;

    cout << "Enter second number : ";
    cin >> iValue2;

    cout << "Common ON bit positions are : ";
    CommonBits(iValue1, iValue2);

    return 0;
}
