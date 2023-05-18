/*
Problem Statement: Duplicate in array
Problem Level: EASY
Problem Description:
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging from 0 to 3, and among these, there is a single integer value that is present twice. You need to find and return that duplicate number present in the array.
Note :
Duplicate number is always present in the given array/list.

*/
#include <iostream>
using namespace std;

int find_Duplicate(int *Arr, int size)
{
    int iSum = 0;     // contain sum of elements of an array
    int idealSum = 0; // of (size -2) elements
    int difference = 0;
    for (int iCnt = 0; iCnt < size; iCnt++)
    {
        if (Arr[iCnt] > (size - 2))
        {
            cout << "INVALID" << endl;
            exit(0);
        }
        iSum = iSum + Arr[iCnt];
    }
    idealSum = ((size - 2) * (size - 1)) / 2;

    difference = iSum - idealSum;
    return difference;
}
int main()
{

    int Arr[] = {0, 5, 2, 3, 5, 1, 4};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int iRet = find_Duplicate(Arr, size);
    cout << iRet << endl;
    return 0;
}