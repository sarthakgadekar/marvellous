// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;

class base; 
/* above forward declaration is must,if we don't declare base class,then line no 11 will give error because there is no instance of base if we don't declare base class above */          
class anotherClass
{
public:
    void memberFunction(base &);
}; 
class base
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend function declaration
    friend void anotherClass::memberFunction(base &);
};

// friend function definition
void anotherClass::memberFunction(base &obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}
