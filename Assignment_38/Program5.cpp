#include<iostream>
using namespace std;

template <class T>
T Min(T *Arr,int Size)
{
    T Min = NULL;
    
    for(int i = 0; i < Size;i++)
    {
        Min = Arr[i];
        if(Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }
    return MIn;
}


int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.1,20.2,30.3,40.4,50.5};

    int iRet = 0;
    iRet = Min(arr,5);
    cout<<"Largest number is : "<<iRet<<"\n";

    float fRet = 0.0f;
    fRet = Min(brr,5);
    cout<<"Largest number is : "<<fRet<<"\n";

    return 0;
}