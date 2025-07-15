#include<iostream>
using namespace std;

typedef unsigned int UINT;
void CheckBit(UINT iNo)
{
    UINT iMask1 = 1;
    UINT iMask2 =  2147483648;
    UINT iResult = 0;

    iResult = iNo & iMask1;

    if(iResult == iMask1)
    {
        cout<<"first bit is on\n";
    }
    else
    {
        cout<<"first bit is off\n";
   
    }

    iResult = iNo & iMask2;

    if(iResult == iMask2)
    {
        cout<<"last bit is on\n";
    }
    else
    {
        cout<<"last bit is off\n";
   
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