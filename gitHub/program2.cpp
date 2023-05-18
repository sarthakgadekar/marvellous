#include <iostream>
#include <string>
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
    string arr[] = {"geeksforgeeks", "geeksfor", "geeks", "gee"};
    int size = 5;
    string s=longestCommonPrefix(arr, size);
    cout << s << endl;
    return 0;
}