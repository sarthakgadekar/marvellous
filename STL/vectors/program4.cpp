#include<iostream>
#include<vector>
using namespace std;

template<class T>
void Display(vector<T> &vec)
{
    for(vector<int>::iterator it=vec.begin(); it !=vec.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
 vector<int> vecF;
 int iSize=0;
 cout<<"enter vector size"<<endl;
 cin>>iSize;
 for(int i=0;i<iSize;i++)
 {
    vecF.push_back(i);
 }
Display(vecF);
 return 0;
}