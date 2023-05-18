#include <iostream>
using namespace std;
struct NODE
{
    int data;
    NODE *next;
    NODE *prev;
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

DoublyCLL::DoublyCLL()
{
    head = NULL;
    tail = NULL;
    CntNode = 0;
}
void DoublyCLL::insertFirst(int iNo)
{
}

void DoublyCLL::insertLast(int iNo)
{
}

void DoublyCLL::insertAtPos(int iNo, int iPos)
{
}

void DoublyCLL::deleteFirst()
{
}
void DoublyCLL::deleteLast()
{
}
void DoublyCLL::deleteAtPos(int iPos)
{
}

void DoublyCLL::Display()
{
}

int DoublyCLL::Count()
{
    return CntNode;
}

int main()
{
    DoublyCLL obj;
    return 0;
}