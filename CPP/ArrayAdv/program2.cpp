/* Problem Statement: Find the Unique Element
Problem Level: MEDIUM

Problem Description:
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Note:
Unique element is always present in the array/list according to the given condition. */

#include <iostream>
#include <algorithm>
using namespace std;

int findUniqueElement(int *Arr, int size)
{
    if (size % 2 == 0)
    {
        return -1;
    }
    int iCmp = 1;
    int start = 0;

    for (start = 0; start < size;)
    {
        if (Arr[start] == Arr[iCmp])
        {
            start = start + 2;
            iCmp = iCmp + 2;
        }

        else
        {
            break;
        }
    }
    return Arr[start];
}
int main()
{
    int Arr[] = {5, 6, 6, 7, 7, 8, 8, 9, 9};
    int size = 9;
    int iRet = findUniqueElement(Arr, size);
    cout << iRet;
    return 0;
}