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


    vector<int>::iterator iter;         // Initialization of iterator
    iter=vec1.begin();
    vec1.insert(iter,15);               //this inserts 15 to the start of vector
    vec1.insert(iter+1,3,15);
    Display(vec1);
    return 0;
}