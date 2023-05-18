#include <iostream>
using namespace std;

class Number
{
    private:
        int iNo;        //characteristics
    
    public:
    
    void Accept()       //setter
    {
        cout<<"enter the value"<<endl;
        cin>>this->iNo;
    }

    void Display()      //getter
    {
        cout<<"value is "<<this->iNo;
    }

    int Fact()
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
    Number nobj1;
    Number nobj2;
    nobj1.Accept();
    nobj2.Accept();
    nobj1.Fact();
    nobj2.Fact();
    int iRet = nobj1.Fact();
    cout << "factorial of " << iRet << endl;
    iRet=nobj2.Fact();
    cout << "factorial : "<< iRet << endl;
    return 0;
}