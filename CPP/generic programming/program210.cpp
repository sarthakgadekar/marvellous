#include <iostream>
using namespace std;
template <class T>
T Addition(T A, T B)
{
    T Ans;
    Ans = A + B;
    return Ans;
}
int main()
{
    int iNo1 = 11, iNo2 = 21;
    int iRet = 0;
    iRet = Addition(iNo1, iNo2);
    cout << iRet << endl;

    float fNo1 = 10.5f, fNo2 = 30.3f;
    float fRet;
    fRet = Addition(fNo1, fNo2);
    cout << fRet << endl;

/*     char cNo1 = 'G', cNo2 = 'H';
    char cRet = '\0';
    cRet = Addition(cNo1, cNo2);
    cout << cRet << endl; */
    return 0;
}