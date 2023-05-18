/* Longest Common Prefix in an Array

    Given a array of N strings, find the longest common prefix among all strings present in the array.
 */

#include <iostream>
#include <algorithm>
using namespace std;

string longestCommonPrefix(string arr[], int N)
{
    string s = "";
    sort(arr, arr + N);
    if (arr[0][0] != arr[N - 1][0])
        return "-1";

    for (int i = 0; i < arr[0].size(); i++)
    {
        if (arr[0][i] == arr[N - 1][i])
            s += arr[0][i];
    }
    return s;
}
int main()
{
    string arr[] = {"geeksforgeeks", "geeksfor", "gee", "geeksfo"};
    string str = longestCommonPrefix(arr, 5);
    cout << str << endl;
    return 0;
}