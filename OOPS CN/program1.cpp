// shallow copy
#include<iostream>
using namespace std;

class Student
{
    public:
        int age;
        char *sName=NULL;
        void Display();

    Student(int age,char *name)
    {
        this->age=age;
        //shallow copy
        sName=name;
    }
};

void Student::Display()
{
    cout<<sName<<" "<<age<<endl;
}
int main()
{
 char name[]="sarthak";
 Student s1(20,name);
 s1.Display();
 name[3]='e';
 Student s2(30,name);
 s2.Display();
 s1.Display();
 return 0;
}