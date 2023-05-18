#include <iostream>
#include <vector>
#include <algorithm> // contains sort algorithm
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    int d1 = (p1.first * p1.first) + (p1.second * p1.second);
    int d2 = (p2.first * p2.first) + (p2.second * p2.second);

    if (d1 == d2)
    {
        return p1.first < p2.first;
    }
    return d1 < d2;
}

int main()
{
    int nCars = 0;
    cout << "enter number of cars in area" << endl;
    cin >> nCars;

    vector<pair<int, int>> v;
    for (int i = 0; i < nCars; i++)
    {
        int x, y;
        cout << "enter location of " << i << "th car in terms of x and y" << endl;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), compare);

    for(auto car : v)
    {
        cout<<"car  x :"<<car.first<<"  y:"<<car.second<<endl;
    }

    return 0;
}