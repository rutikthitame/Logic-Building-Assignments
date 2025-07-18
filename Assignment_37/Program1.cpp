#include<iostream>
using namespace std;

class Array
{
    protected:
    int * Arr;
    int iSize;

    public:
        Array(int Value = 10)
        {
            cout<<"Inside constructor\n";

            this->iSize =  Value;
            this->Arr = new int[iSize];
        }

        Array(Array &ref)
        {
            this->iSize = ref.iSize;
            this->Arr = new int[this->iSize];

            for(int i = 0; i < this->iSize; i++)
            {
                Arr[i] = ref.Arr[i];
            }
        }
        ~Array()
        {
            cout<<"Inside destructor\n";

            delete []Arr;
        }
        inline void Display();
        inline void Accept();
};

void Array::Accept()
{
    cout<<"Please enter values\n";

    for(int i = 0; i < this->iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are : \n";
    for(int i = 0; i < this->iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

class ArrSearch : public Array
{
    public:
    ArrSearch(int no = 10) : Array(no)
    {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::Frequency(int value)
{
    int iCnt = 0;

    for(int i = 0; i < this->iSize; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch::SearchFirst(int value)
{
    int i = 0;
    for( i= 0; i < this->iSize; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }
    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i+1;
    }
}

int ArrSearch::SearchLast(int value)
{
    int i = 0;
    int last = 0;
    for(i = 0; i < this->iSize; i++)
    {
        if(Arr[i] = value)
        {
            last = i+1;
        }
    }
    return last;
}

int ArrSearch::EvenCount()
{
    int i = 0;
    int iCount = 0;
    for(i = 0; i < this->iSize; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int ArrSearch::OddCount()
{
    int i = 0;
    int iCount = 0;
    for(i = 0; i < this->iSize; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int ArrSearch::SumAll()
{
    int i = 0;
    int iSum = 0;
    for(i = 0; i < this->iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}


int main()
{
    cout<<"Inside main\n";
    
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet = 0;

    iRet = sobj1.Frequency(11);
    cout<<"Frequency is : "<<iRet<<"\n";

    iRet = sobj1.SearchFirst(11);
    cout<<"First occurance is : "<<iRet<<"\n";

    iRet = sobj1.SearchLast(11);
    cout<<"Last occurance is : "<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Number of even elements are : "<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Number of odd elements are : "<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Summation of all elements is : "<<iRet<<"\n";



    return 0;
}