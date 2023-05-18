#include <iostream>
using namespace std;
template <class T>
T Largest(T* Arr, int size)
{
    T large=Arr[0];
    for(int iCnt=1;iCnt<size;iCnt++)
    {
        if(Arr[iCnt]>large)
        {
            large=Arr[iCnt];
        }
    }
    return large;
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
    int iRet = Largest(Arr, size);
    cout<<iRet;
    return 0;
}