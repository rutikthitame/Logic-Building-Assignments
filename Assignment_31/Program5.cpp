#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT OnBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iCnt = 0;  
    UINT iResult = 0;  

    for(iCnt = 1; iCnt < 4; iCnt++)
    {
        iMask1 = iMask1 * 2;
        iResult = iNo & iMask1;
        if(iResult != iMask1)
        {
            iNo = iNo ^ iMask1;
        }
    }
    return iNo;
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OnBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

   
    return 0;


}