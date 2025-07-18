#include<iostream>
using namespace std;

template <class T>
T Max(T no1,T no2,T no3)
{
    T Max = NULL;

    if(no1 > Max)
    {
        Max = no1;
    }
    else if(no2 > Max)
    {
        maxx = no2;
    }
    else(no3 > Max)
    {
        Max = no3;
    }

    return Max;
}


int main()
{
    int iRet = 0;
    iRet = Max(10,11,5);
    cout<<"Largest number is : "<<iRet<<"\n";

    float fRet = 0;
    fRet = Max(10.1,23.2,11.2);
    cout<<"Largest number is : "<<fRet<<"\n";
    


    return 0;
}