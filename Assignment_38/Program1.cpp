#include<iostream>
using namespace std;

template <class T>
T Multiply(T no1,T no2)
{
    T ans = NULL;
    ans = no1 * no2;

    return ans;
}


int main()
{
    int iRet = 0;
    iRet = Multiply(10,11);
    cout<<"Multiplication is : "<<iRet<<"\n";

    float fRet = 0;
    fRet = Multiply(10.1,11.2);
    cout<<"Multiplication is : "<<fRet<<"\n";
    


    return 0;
}