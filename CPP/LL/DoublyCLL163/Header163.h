#include <iostream>
using namespace std;
struct NODE
{
    int data;
    NODE *next;
    NODE *prev;

    NODE(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

typedef NODE *PNODE;

class DoublyCLL
{
private:
    PNODE head;
    PNODE tail;
    int CntNode;

public:
    DoublyCLL();
    void insertFirst(int);
    void insertLast(int);
    void insertAtPos(int, int);

    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int);

    int Count();
    void Display();
};