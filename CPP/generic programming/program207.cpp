#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p,T &q)
{
    T temp;
    temp=p;
    p=q;
    q=temp;
}
int main()
{
    float iNo1=1.1,iNo2=2.1;
    cout<<"before swap data is : "<<iNo1<<"  "<<iNo2<<endl;;
    SwapR(iNo1,iNo2);
    cout<<"After Swap data is : "<<iNo1<<"  "<<iNo2;
    return 0;
}