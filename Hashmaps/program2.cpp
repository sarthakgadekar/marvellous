// remove duplicates from array and return vector

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> RemDuplicates(int *arr, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;

    for (int i = 0; i < size; i++)
    {
        if (seen.count(arr[i]) > 0)
        {
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}
int main()
{
    int size;
    cout << "enter size of an array" << endl;
    cin >> size;
    int *arr = new int[size];
    cout << "enter array objects" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    vector<int> vec;
    vec = RemDuplicates(arr, size);
    for (auto x : vec)
    {
        cout << x << " ";
    }
    return 0;
}