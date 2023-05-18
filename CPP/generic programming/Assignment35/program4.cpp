#include <iostream>
using namespace std;

template <class T>
int LastOccurence(T *Arr, int size, T iNo)
{
    int iCnt = 0;
    for (iCnt = size-1; iCnt>=0; iCnt--)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int size, iNo;
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
    int iRet = LastOccurence(Arr, size, iNo);
    cout << "index of " << iNo << " is " << iRet << endl;
    return 0;
}