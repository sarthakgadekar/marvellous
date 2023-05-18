// reserve method

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.reserve(1000);

    int size, n;
    cout << "enter no of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) // not a good method
    {
        int no = 0;
        cin >> no;
        a.push_back(no);
        cout << "changing capacity " << a.capacity()<<endl;
    }
    cout << endl;

    for (int x : a)
    {
        cout << x << " ";
    }

    return 0;
}