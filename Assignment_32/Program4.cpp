#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ChkBit(UINT iNo,UINT iPos)
{
    UINT iMask1 = 1;
    UINT iCnt = 0;  

    for(iCnt = 1; iCnt < iPos; iCnt++)
    {
        iMask1 = iMask1 * 2;
    }

    iNo = iNo ^ iMask1;
    
    return iNo;
}

int main()
{
    int iValue = 0,iPos = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    cout<<"Enter position : ";
    cin>>iPos;

    iRet = ChkBit(iValue,iPos);

    cout<<"Modified number is : "<<iRet<<"\n";

   
    return 0;


}