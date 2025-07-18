#include<iostream>
using namespace std;

template <class T>
T AddN(T *Arr,int Size)
{
    T Sum = NULL;
    
    for(int i = 0; i < Size;i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}


int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.1,20.2,30.3,40.4,50.5};

    int iRet = 0;
    iRet = AddN(arr,5);
    cout<<"Addition is : "<<iRet<<"\n";

    float fRet = 0.0f;
    fRet = AddN(brr,5);
    cout<<"Addition is : "<<fRet<<"\n";

    return 0;
}