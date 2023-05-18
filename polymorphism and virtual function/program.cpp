
/* demonstration on how runtime polymorphism i.e function overriding is achieved using virtual function  */

/* Need of virtual functions: Consider a coding scenario where base class and its derived class has been written. Then if you create a pointer in main function, which is pointing to derived class object (upcasting concept) and call any specific function using that pointer. Now that function is available in both base and derived class then it is expected that the derived class function will be called because pointer is pointing to derived class object. But unexpectedly base class function gets called. In other words, in case of upcasting by default pointer type or reference type gets called but practically function of pointed type or referred type should be called. So, to avoid this problem virtual functions introduced so that you can tell compiler that which function to call at runtime. You can just add “virtual” keyword in front of function to make it virtual. */

#include<iostream>
using namespace std;
class base
{
 public:
 int i, j;
 
 public:
 virtual void fun()
 {
  cout << "inside base class fun function" << endl;
 }
 
 virtual void gun()
 {
  cout << "inside base class gun function" << endl;
 }
 
 virtual void sun()
 {
  cout << "inside base class sun function" << endl;
 }
 
 void run()
 {
  cout << "inside base class run function" << endl;
 } 
};
class derived : public base
{
  public:
  int k;
  
  public:
  void fun()
  {
   cout << "inside derived class fun function" << endl;
  }
  
  virtual void gun()
  {
   cout << "inside derrived class gun function" << endl;
  }
  
  void run()
  {
   cout << "inside derived class run function" << endl;
  }
  
  virtual void mun()
  {
   cout << "inside derrived class mun function" << endl;
  }  
};
int main()
{
 base bobj;
 derived dobj;
 
 base *bp = nullptr;
 derived *dp = nullptr;
 
 bobj.fun();   // base fun function called
 bobj.gun();   // base gun function called
 bobj.sun();   // base sun function called
 bobj.run();   // base run function called
 
 dobj.fun();   // derived fun function called 
 dobj.gun();   // derived gun function called
 dobj.sun();   // base sun function called
 dobj.mun();   // derived mun function called
 dobj.run();   // derived run function called
 
 bp = &dobj;   //upcasting
 
 bp->fun();   // derived fun called
 bp->gun();    // derived gun called
 bp->sun();    // base sun called
 bp->run();    // base run called
 
 //bp->mun();   // error
 //dp = &bobj;   //error (downcasting not possible)
 
 cout << "size of base object : " << sizeof(bobj) << " bytes" << endl;
 cout << "size of derived object : " << sizeof(dobj) << " bytes" << endl;
 
 return 0;
}