/* When a derived class(child class) inherits more than one base class(parent class), it is called multiple inheritance. */

#include <iostream>
using namespace std;
class Base1
{
public:
  float salary=0;
  void paisa()
  {
    cout<<"enter salary"<<endl;
    cin>>salary;
  }
};

class Base2
{
public:
  float bonus = 0;
  void paisa()
  {
    cout<<"enter bonus"<<endl;
    cin>>bonus;
  }
};

class Derived : public Base1, public Base2
{
public:
  void sum()
  {
    cout << "Your Total Salary is: " << (salary + bonus) << endl;
  }
};
int main()
{

  // Creating an object of the derived class and calling the sum() function.
  Derived x;
  x.paisa();
  x.sum();
  return 0;
}

/* The above program has two base classes named Base1 and Base2, which contain the properties salary and bonus. A derived class named
”derived” inherits parent classes Base1 and Base2. In the derived class, the function name sum is used to give the sum of salary and bonus.

In the main function, there is an object named x that is created from a derived class called the sum() function, which will add bonus and salary and give it as output. */
/* Diamond problem in Multiple Inheritance:
    In multiple inheritance, we can face a diamond problem. Let’s take an example in the above figure: “B” and “C” classes are inherited from a single Base class that is “A,” and then“D” is inherited from both “B'' and “C”, as this situation is creating a diamond shape, therefore, this problem is known as “diamond problem”.

Now here, “B” and “C” classes will have the member variable of class “A” as they are inherited from “A”, as “D” is inherited from “B” and “C” so it will contain two copies of “A’s” member variable that is one from “B” and one from “C”, thus causing ambiguities. The compiler will get confused about which will be taken in D from the two copies of A’s member variable. */
