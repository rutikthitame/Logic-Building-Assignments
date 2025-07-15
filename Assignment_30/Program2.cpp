#include<iostream>
using namespace std;

typedef unsigned int UINT;
void CheckBit(UINT iNo)
{
    UINT iMask1 = 131072;
    UINT iMask2 = 16;
    UINT iResult = 0;

    iResult = iNo & iMask1;

    if(iResult == iMask1)
    {
        cout<<"18th bit is on\n";
    }
    else
    {
        cout<<"18th bit is off\n";
   
    }
    iResult = iNo & iMask2;

    if(iResult == iMask2)
    {
        cout<<"5th bit is on\n";
    }
    else
    {
        cout<<"5th bit is off\n";
   
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