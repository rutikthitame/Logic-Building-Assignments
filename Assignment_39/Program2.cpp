#include<iostream>
using namespace std;

template<class T>
T Frequency(T *Arr, int iSize,T no)
{
    int i = 0,iCount = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == no)
        {
            iCount++;
        }
    }
    return iCount;  
}

int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,40,10,20,30,10,30};
    double brr[] = {10.3,20.2,30.4,40.3,10.7,20.5,30.4,10.6,30.7};

    iRet = Frequency(arr,9,10);
    cout<<"Frequency is : "<<iRet<<"\n";

    iRet = Frequency(brr,9,10.3);
    cout<<"Frequency is : "<<iRet<<"\n";

    return 0;
}