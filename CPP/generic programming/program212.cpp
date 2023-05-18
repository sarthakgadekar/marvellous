#include <iostream>
using namespace std;
template <class T>
T Maximum(T *Arr, int size)
{
    int i = 0;
    T max=Arr[i];
    for (i = 1; i < size; i++)
    {
        if(max<Arr[i])
        {
            max=Arr[i];
        }

    }
    return max;
}
int main()
{
    int Brr[] = {10, 20, 30, 40, 50};
    int max=Maximum(Brr,5);
    cout<<"maximum is "<<max<<endl;

    float frr[] = {10.11, 20.111, 30.11, 40.11, 50.11};
    float fmax=Maximum(frr,5);
    cout<<"maximum is "<<fmax<<endl;
    
    return 0;
}