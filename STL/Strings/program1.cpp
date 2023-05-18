#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    if (s1.empty())
    {
        cout << "string is empty" << endl;
    }
    s1 = "hello sarthak";
    cout << s1 << endl;
    cout<<s1[3]<<endl;

    if (s1.empty())
    {
        cout << "string is empty" << endl;
    }

    string s3("Stl string");
    cout << s3 << endl;

    string s2(s1); // string copy
    cout << s2;
    return 0;
}