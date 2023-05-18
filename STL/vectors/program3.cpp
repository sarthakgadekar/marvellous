#include <iostream>
#include <vector>
using namespace std;

template<class T>
void Display(vector<T> &v)
{
    for (vector<int>::iterator it= v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
}
int main()
{
    vector<int> vec1;
    cout<<"enter no of elements you want to push into vector"<<endl;
    int size,element;
    cin>>size;
    cout << "push elements into the vector" << endl;
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        vec1.push_back(element);
    }
    Display(vec1);
    cout<<endl;
    return 0;
}