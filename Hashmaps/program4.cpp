// longest consecutive subsequence      naive solution
// program 5 is using hashing
#include <iostream>
#include <algorithm>
using namespace std;

void longSubSeq(int *arr, int size)
{
    sort(arr, arr + size);
    int curr = 1;
    int finalSubSeq = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1] + 1)
        {
            curr++;
        }
        else
        {
            finalSubSeq = max(finalSubSeq, curr);
            curr = 1;
        }
    }
    finalSubSeq = max(finalSubSeq, curr);
    cout << "longest subsequence is " << finalSubSeq << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    longSubSeq(arr, size);
    return 0;
}