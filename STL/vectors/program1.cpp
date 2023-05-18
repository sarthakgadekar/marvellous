#include <iostream>
#include <vector>
using namespace std;

template<class T>
void Display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<char> vec1;
    cout<<"enter no of elements you want to push into vector"<<endl;
    int size;
    cin>>size;
    char ch='\0';
    cout << "push elements into the vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cin>>ch;
        vec1.push_back(ch);
    }
    Display(vec1);
    return 0;
}