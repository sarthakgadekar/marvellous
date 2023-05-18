#include <iostream>
using namespace std;
template <class T>
T Smallest(T* Arr, int size)
{
    T small=Arr[0];
    for(int iCnt=1;iCnt<size;iCnt++)
    {
        if(Arr[iCnt]<small)
        {
            small=Arr[iCnt];
        }
    }
    return small;
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
    int iRet = Smallest(Arr, size);
    cout<<iRet;
    return 0;
}