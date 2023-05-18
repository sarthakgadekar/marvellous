#include <iostream>
using namespace std;

class ArrayX
{
private:
    int *Arr;
    int iSize;

public:
    ArrayX(int iValue)              // parametarised constructor
    {
        this->iSize = iValue;
        Arr = new int[iSize];       // allocate the Resource
    }

    ~ArrayX()                       // destructor      it gets called before line 62
    {
        delete[] Arr;               // Deallocate the resource
    }

    void Accept()
    {
        int iCnt = 0;
        cout << "Enter the elements" << endl;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;
        cout << "elements of array are" << endl;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << " ";
        }
        cout<<endl;
    }

    int Summation()
    {
        int iCnt = 0;
        int iSum = 0;
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
};
int main()
{
    int iRet=0;
    ArrayX obj(5);
    obj.Accept();
    obj.Display();                                                           
    iRet=obj.Summation();
    cout<<"Addition of elements is : "<<iRet<<endl; 
    return 0;
}