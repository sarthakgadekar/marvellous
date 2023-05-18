#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> a;
   vector<int> b(5, 10);
   vector<int> c(b.begin(), b.end());
   vector<int> d {10,20,30,40,50,60,44};

  /*   // iterate a vector
   for (auto it = c.begin(); it != c.end(); it++)
   {
      cout << *it << " ";
   }
   cout << endl;

   // for each loop
   for (int x : c)
   {
      cout << x << " ";
   }
   cout << endl;

   // insert in vector
   d.insert(d.begin() + 3, 10);
   for (int x : d)
   {
      cout << x << " ";
   }
   cout << endl;

   // erase

   d.erase(d.begin() + 3);
   for (int x : d)
   {
      cout << x << " ";
   }
   cout << endl; */
 
   d.erase(d.begin()+2,d.begin()+3);
   for(int x: d)
   {
      cout<<x<<" ";
   }
   cout<<endl;
   return 0;
}