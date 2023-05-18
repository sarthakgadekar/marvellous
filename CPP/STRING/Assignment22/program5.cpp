#include<iostream>
using namespace std;

void ExamTiming(char div)
{
    switch(div)
    {
        case 'A':
            cout<<"your exam is at 7:00 am"<<endl;
            break;
        case 'B':
            cout<<"your exam is at 8:30 am"<<endl;
            break;
        case 'C':
            cout<<"your exam is at 09:20 am"<<endl;
            break;
        case 'D':
            cout<<"your exam is at 11:00 am"<<endl;
            break;
    }
}
int main()
{
    char div;
    cout<<"enter division"<<endl;
    cin>>div;
    if(div<'A' || div>'D')
    {
        cout<<"Invalid division"<<endl;
        exit;
    }
    ExamTiming(div);
    return 0;
}