#include<iostream>
#include<tuple>
using namespace std;
int main()
{
 tuple<string,int,char> t=make_tuple("sarthak",24,'S');
 cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
 get<0>(t)="SARTHAK";
 cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t);
 return 0;
}