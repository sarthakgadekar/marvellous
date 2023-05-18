#include <iostream>
using namespace std;

template <class T>
void ReverseOrder(T *Arr, int size)
{
    int iCnt = 0;
    int start = 0;
    int end = size - 1;
    for (iCnt = 0; iCnt < size, start < end; iCnt++)
    {
        T temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "enter no of elements" << endl;
    cin >> size;
    cout << "enter numbers" << endl;
    int *Arr = new int[size];
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        cin >> Arr[iCnt];
    }

    ReverseOrder(Arr, size);
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        cout << Arr[iCnt] << " ";
    }
    return 0;
}