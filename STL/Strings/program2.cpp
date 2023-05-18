#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "hello";
    s1.append(" i am sarthak"); // OR
    cout << s1 << endl;

    string s2 = "Hello";
    s2 = s2 + " I am sarthak";
    cout << s2 << endl;

    string s3 = "sarthak";
    cout << s3.length() << endl;
    
    string s4="apple";
    string s5="mango";

    cout<<s5.compare(s4)<<endl;
    cout<<s4.compare(s5)<<endl;
    cout<<s5.compare(s5)<<endl;
    return 0;
}