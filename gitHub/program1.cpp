#include<iostream>
using namespace std;
int main()
{
 int data=0;
 cout<<"data: "<<data<<endl;

 int *newElement=new (&data) int(10);
 cout<<"newElement : "<<*newElement<<endl;
 cout<<"data: "<<data<<endl;

 
 return 0;
}