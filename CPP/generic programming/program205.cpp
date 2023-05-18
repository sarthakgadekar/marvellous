#include<iostream>
using namespace std;

void SwapA(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int iNo1=11,iNo2=21;
    cout<<"before swap data is : "<<iNo1<<"  "<<iNo2<<endl;;
    SwapA(&iNo1,&iNo2);
    cout<<"After Swap : "<<iNo1<<"  "<<iNo2;
    return 0;
}