#include <iostream>
using namespace std;
template <class T>
class ArrayX
{
public:
    T *Arr;
    int size;

    ArrayX(int value);
    void Accept();
    ~ArrayX();
    void Display();
    T Maximum();
};

template <class T>
ArrayX<T>::ArrayX(int value)
{
    size = value;
    Arr = new T[size];
}
template <class T>
void ArrayX<T>::Accept()
{
    cout << "enter elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> Arr[i];
    }
    cout << endl;
}
template <class T>
ArrayX<T>::~ArrayX()
{

    delete[] Arr;
}
template <class T>
void ArrayX<T>::Display()
{
    cout << "values are : ";
    for (int i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

template <class T>
T ArrayX<T>::Maximum()
{
    T Max = Arr[0];
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
    ArrayX<int> obj1(5);
    obj1.Accept();
    obj1.Display();
    int iRet = obj1.Maximum();
    cout << "maximum  is " << iRet << endl;

    ArrayX<float> obj2(5);
    obj2.Accept();
    obj2.Display();
    float fRet = obj2.Maximum();
    cout << "maximum  is " << fRet << endl;
    return 0;
}