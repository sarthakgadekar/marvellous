#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<int, char> p;
    p.first = 11;
    p.second = 'A';

    cout << p.first << endl;
    cout << p.second << endl;

    pair<int, string> p4;
    p4.first = 11;
    p4.second = "sart";

    cout << p4.first << endl;
    cout << p4.second << endl;

    pair<int, char> p2 = make_pair(10, 'L');

    cout << p2.first << endl;
    cout << p2.second << endl;

    pair<int, string> p3 = make_pair(24, "sarthak");
    cout << p3.first << endl;
    cout << p3.second << endl;

    //you can make array of pairs,vector of pairs,list of pairs
    return 0;
}