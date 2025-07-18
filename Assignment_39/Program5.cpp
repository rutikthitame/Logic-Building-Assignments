#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr, int iSize)
{
    int i = 0;
    for(i = iSize-1 ; i >= 0; i--)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int arr[] = {10,20,30,40,10,20,30,10,30};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    Reverse(arr,9);

    return 0;
}