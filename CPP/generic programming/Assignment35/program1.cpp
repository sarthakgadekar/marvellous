#include<iostream>
using namespace std;

template<typename T>
void Display(T value,int num)
{
    int iCnt=0;
    while(iCnt<num)
    {
        cout<<value<<" ";
        iCnt++;
    }
    cout<<endl;
}

int main()
{
 Display(66,5);
 Display('a',5);
 Display(111.111,5);
 return 0;
}