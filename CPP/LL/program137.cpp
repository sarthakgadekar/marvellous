#include <iostream>
using namespace std;

class Number
{
public:
    int Factorial(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
}; 

int main()
{
    Number nobj;
    int iValue = 0;
    cout << "enter a number" << endl;
    cin >> iValue;
    int iRet = nobj.Factorial(iValue);
    cout << "factorial of " << iValue << " is " << iRet << endl;
    return 0;
}