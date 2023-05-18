#include <iostream>
using namespace std;

template <class T>
T CountFreq(T *Arr, int size, T iNo)
{
    int iCount = 0;
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int size, freq, iNo;
    cout << "enter no of elements" << endl;
    cin >> size;
    cout << "enter numbers" << endl;
    int *Arr = new int[size];
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        cin >> Arr[iCnt];
    }
    cout << "enter num of which u want to find freq" << endl;
    cin >> iNo;
    int iRet = CountFreq(Arr, size, iNo);
    cout << "frequency of " << iNo << " is "<< iRet << endl;
    return 0;
}