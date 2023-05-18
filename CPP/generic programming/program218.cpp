// doubly CLL generic
#include <iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    node *next;
    node *prev;
};

template<class T>
class DoublyCLL
{
private:
    node<T> * head;
    node<T> *tail;
    int CntNode;

public:
    DoublyCLL();
    void insertFirst(T);
    void insertLast(T);
    void insertAtPos(T, int);

    void deleteFirst();
    void deleteLast();
    void deleteAtPos(int);

    int Count();
    void Display();
};

template<class T>
DoublyCLL<T>::DoublyCLL()
{
    head = NULL;
    tail = NULL;
    CntNode = 0;
}
template<class T>
void DoublyCLL<T>::insertFirst(T iNo)
{
    node<T> *newnode=new node<T>;
    newnode->data=iNo;
    newnode->next=NULL;
    if(head==NULL && tail==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {

    }
}
template<class T>
void DoublyCLL<T>::insertLast(T iNo)
{
}
template<class T>
void DoublyCLL<T>::insertAtPos(T iNo, int iPos)
{
}
template<class T>
void DoublyCLL<T>::deleteFirst()
{
}
template<class T>
void DoublyCLL<T>::deleteLast()
{
}
template<class T>
void DoublyCLL<T>::deleteAtPos(int iPos)
{
}
template<class T>
void DoublyCLL<T>::Display()
{
}
template<class T>
int DoublyCLL<T>::Count()
{
    return CntNode;
}

int main()
{
    DoublyCLL<int> obj;
    return 0;
}