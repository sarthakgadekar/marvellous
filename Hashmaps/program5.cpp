// longest subsequence using hashing
#include <iostream>
#include <unordered_map>
using namespace std;
int longSubSeq(int *arr, int size)
{
    unordered_map<int, int> uMap;
   
}
int main()
{
    int arr[] = {100, 4, 2, 5, 6, 6, 3};
    int size = 7;
    int A = longSubSeq(arr, size);
    cout << "longest subsequence is : " << A << endl;
    return 0;
}