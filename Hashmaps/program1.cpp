#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
 unordered_map<string,int> map1;
 //how to insert into in built maps

        // method 1
 map1["sarthak"]=1;
 cout<<map1["sarthak"]<<endl;               // output will be 1

        //method 2
pair<string,int> p;
p.first="kartik";
p.second=2;             // or you can use default constructor like thiis -> pair<string,int> p("kartik",2);

map1.insert(p);
cout<<map1["kartik"]<<endl;
cout<<"size of map is "<<map1.size()<<endl;

p.first="accenture";
p.second=3;
map1.insert(p);

cout<<map1["accenture"]<<endl;
cout<<map1.at("accenture")<<endl;

// cout<<map1.at("coding ninja")<<endl; // it gives error and do not insert coding ninja in the map if it is not there
cout<<map1["coding ninja"]<<endl;           //it inserts coding ninja in map if it is not present in map without giving any errors
cout<<"size of map is "<<map1.size()<<endl;

if(map1.count("accenture") > 0)         // checks presense of the key
{
    cout<<"accenture is present"<<endl;
}
 return 0;
}