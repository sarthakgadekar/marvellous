// leader in an array

#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
}
int main()
{
    int *arr = new int[2];
    for (int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }
    leaders(arr, 2);
    return 0;
}