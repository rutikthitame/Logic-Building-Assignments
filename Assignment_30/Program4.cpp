#include<iostream>
using namespace std;

typedef unsigned int UINT;
void CheckBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 =  128;
    UINT iMask3 = 256;
    UINT iResult = 0;

    iResult = iNo & iMask1;

    if(iResult == iMask1)
    {
        cout<<"7th bit is on\n";
    }
    else
    {
        cout<<"7th bit is off\n";
   
    }
    iResult = iNo & iMask2;

    if(iResult == iMask2)
    {
        cout<<"8th bit is on\n";
    }
    else
    {
        cout<<"8th bit is off\n";
   
    }

    iResult = iNo & iMask3;

    if(iResult == iMask3)
    {
        cout<<"9th bit is on\n";
    }
    else
    {
        cout<<"9th bit is off\n";
   
    }
    
}

int main()
{
    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    CheckBit(iValue);

   
    return 0;


}