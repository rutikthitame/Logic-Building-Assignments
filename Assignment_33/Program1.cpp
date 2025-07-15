#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ChkBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iCount = 0;
    UINT iCnt = 0;  
    UINT iResult = 0;

    for(iCnt = 0; iCnt < 32; iCnt++)
    {
        iMask1 = iMask1 * 2;
        iResult = iNo & iMask1;

        if(iResult == iMask1)
        {
            iCount++;
        }

    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = ChkBit(iValue);

    cout<<"number of ON bits are : "<<iRet<<"\n";

   
    return 0;


}