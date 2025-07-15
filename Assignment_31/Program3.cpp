#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iResult = 0;
    
    iResult = iNo ^ iMask1;

    return iResult;
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

   
    return 0;


}