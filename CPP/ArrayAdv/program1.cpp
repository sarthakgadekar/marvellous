#include <iostream>
using namespace std;

void UniqueElement(int Arr[], int size)
{
    int iCmp=0;
    for (int start = 0; start < size; start++)
    {
        for (iCmp = 0; iCmp < size; iCmp++)
        {
            if (Arr[start] == Arr[iCmp] && start != iCmp)
            {
                break;
            }

        }
        if(iCmp==size)
        {
            cout<<Arr[start]<<" is unique element"<<endl;
            break;
        }
    }
}
    int main()
    {
        int arr[] = {6, 1, 6, 3, 4, 3, 1};
        UniqueElement(arr, 7);
        return 0;
    }