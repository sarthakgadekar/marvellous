#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int size;

    ArrayX(int value);
    void Accept();
    ~ArrayX();
    void Display();
    int Maximum();
};

ArrayX::ArrayX(int value)
{
    size = value;
    Arr = new int[size];
}

void ArrayX::Accept()
{
    cout << "enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cout << endl;
}

ArrayX::~ArrayX()
{

    delete[] Arr;
}

void ArrayX::Display()
{
    cout << "values are : ";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int ArrayX::Maximum()
{
    int Max = Arr[0];
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();
    int iRet = obj1.Maximum();
    cout << "maximum  is " << iRet << endl;
    return 0;
}