/* Suppose we have two classes Circle and rectangle both inherited from a
class called Shape. Each class contains a draw() function to draw the
relevant shape on the screen. If we are to draw a picture
containing numerous circles and rectangles, we can do so through
a program given below. */

#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()
    {
        cout << “In Shape class” <<endl;
    }
};

class Circle :public Shape
{
public:
    void draw()
    {
        cout << “In Circle class” <<endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout <<“In Rectangle class”<<endl;
    }
};

int main()
{
    Circle c1, c2, c3;
    Rectangle r1, r2, r3;
    int i;
    Shape *p[] = {&c1, &c2, &r1, &r2, &r3, &c3};
    for (i = 0; i <= 5; i++)
        p[i]->draw();
    return 0;
}

/* Here is the output of the program…
In Circle class
In Circle class
In Rectangle class
In Rectangle class
In Rectangle class
In Circle class

In main() we have created an array of Shape pointers and stored
addresses of Circle and Rectangle objects in it.
Rectangle this is permitted because Shape is base class and Circle
and Rectangle are classes derived from it. When we store address
of a derived class object in pointer to base class pointer, it is
known as an upcasted pointer. Thus, p[] is an array of upcasted
pointers.

When it is time to draw the picture we can simply run the loop,
for (i = 0; i <= 5; i++)
    p[i]->draw();
When p[i] contains address of the Cricle object it calls the
function Similarly, when it contains the address of the Rectangle
object it would call the Rectangle::draw() function. Thus through
the same action, different activities result. In short, polymorphism
at work.

 */