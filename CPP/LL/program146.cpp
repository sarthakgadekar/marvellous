/* 
    *  *  *  *
    *  *  *  *
    *  *  *  *
    *  *  *  *
*/

#include<iostream>
using namespace std;

class Pattern
{
    int iRow,iCol;

    public:
        Pattern(int a,int b)
        {
            this->iRow=a;
            this->iCol=b;
        }

        void DisplayPattern()
        {
            int i=0;
            int j=0;
            for(i=1;i<=iRow;i++)
            {
                for(j=1;j<=iCol;j++)
                {
                    cout<<"* ";
                }
                cout<<endl;
            }

        }
};

int main()
{
    Pattern *obj=new Pattern(5,6);
    obj.DisplayPattern();
    return 0;
}