#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int sum(int x, int y)
{
    int s = x + y;
    cout << "The sum of numbers : " << s;
    return 0;
}
int main()
{
    auto start = high_resolution_clock::now();
    sum(28, 8);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\nTime taken by function : " << duration.count() << " microseconds";
    return 0;
}