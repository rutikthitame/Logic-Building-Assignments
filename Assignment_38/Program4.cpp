#include<iostream>
using namespace std;

template <class T>
T Max(T *Arr,int Size)
{
    T Max = NULL;
    
    for(int i = 0; i < Size;i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}


int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.1,20.2,30.3,40.4,50.5};

    int iRet = 0;
    iRet = Max(arr,5);
    cout<<"Largest number is : "<<iRet<<"\n";

    float fRet = 0.0f;
    fRet = Max(brr,5);
    cout<<"Largest number is : "<<fRet<<"\n";

    return 0;
}