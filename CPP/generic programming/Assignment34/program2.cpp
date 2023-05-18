#include <iostream>
using namespace std;
template <class T>
T Largest(T no1, T no2, T no3)
{
    if(no1>=no2 && no1>=no3)
    {
        return no1;
    }
    else if(no2>=no1 && no2>=no3)
    {
        return no2;
    }
    else
    {
        return no3;
    }
}
int main()
{
    int iRet = Largest(10, 20, 30);
    float fRet=Largest(1.1,22.2,3.56);
    cout<<fRet<<endl;
    cout << iRet << endl;
    return 0;
}