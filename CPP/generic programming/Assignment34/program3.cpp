#include <iostream>
using namespace std;
template <class T>
T Addition(T* Arr, int size)
{
    T add=Arr[0];
    for(int iCnt=1;iCnt<size;iCnt++)
    {
        add=add+Arr[iCnt];
    }
    return add;
}
int main()
{
    int size;
    cout << "enter number of elements" << endl;
    cin >> size;
    int *Arr = new int[size];
    cout << "enter values" << endl;
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        cin >> Arr[iCnt];
    }
    int iRet = Addition(Arr, size);
    cout<<iRet;
    return 0;
}