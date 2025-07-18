#include<iostream>
using namespace std;

template<class T>
T SearchLast(T *Arr, int iSize,T no)
{
    int i = 0,LastOcc = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == no)
        {
            LastOcc = i+1;
        }
    }
    return LastOcc;
}

int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,40,10,20,30,10,30};
    double brr[] = {10.3,20.2,30.4,40.3,10.7,20.5,30.4,10.6,30.7};

    iRet = SearchLast(arr,9,10);
    cout<<"Last occurance is at : "<<iRet<<"\n";

    iRet = SearchLast(brr,9,10.3);
    cout<<"Last ocuurance is at : "<<iRet<<"\n";

    return 0;
}