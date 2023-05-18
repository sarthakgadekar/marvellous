#include <iostream>
using namespace std;

class Base
{
public:
    float salary = 900;
};

class Derived : public Base
{
public:
    float bonus = 100;
    void sum()
    {
        cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};

int main()
{

    // Creating an object of the derived class.
    Derived x;

    // Gets the salary variable of Base class.
    cout << "Your Salary is:" << x.salary << endl;
    // Gets the bonus variable of the Derived class.
    cout << "Your Bonus is:" << x.bonus << endl;
    x.sum();
    return 0;
}

/* In the above example, Base is the class name and the parent class, which contains the property named salary and the value 900.

In the same way, there is another class named Derived, which is the child class, which inherits the property of the parent class and has its property named as a bonus which contains the value of 100.

In the child class, there is a function named sum(), which is used to add the salary and bonus. In the main function, an object is created named “x” of the “Derived” class which is a child class, and using that object, the properties, and the sum function are called from the derived class, which will add the salary and bonus and gives it as output. */