#include<iostream>
using namespace std;

typedef unsigned int UINT;
void CheckBit(UINT iNo)
{
    UINT iMask1 = 64;
    UINT iMask2 =  16384;
    UINT iMask3 = 1048576;
    UINT iMask4 = 134217728;
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
        cout<<"15th bit is on\n";
    }
    else
    {
        cout<<"15th bit is off\n";
   
    }

    iResult = iNo & iMask3;

    if(iResult == iMask3)
    {
        cout<<"21th bit is on\n";
    }
    else
    {
        cout<<"21th bit is off\n";
   
    }

    iResult = iNo & iMask4;

    if(iResult == iMask4)
    {
        cout<<"28th bit is on\n";
    }
    else
    {
        cout<<"28th bit is off\n";
   
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