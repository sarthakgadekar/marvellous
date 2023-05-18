// singly CLL generic
#include <iostream>
using namespace std;
template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCLL
{
private:
    node<T> *head; // characteristics
    node<T> *tail;

public: // behaviours
    SinglyCLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void Display();
    int Count();
};

template<class T>
SinglyCLL<T>::SinglyCLL() // default constructor because its not accepting anythiing
{
    head = NULL;
    tail = NULL;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    node<T> * newnode = NULL;
    newnode = new node<T>;
    newnode->data = no;
    newnode->next = NULL;

    if ((head == NULL) && (tail == NULL)) // if LL is empty
    {
        head = newnode;
        tail = newnode;
    }
    else // if CLL contains at least one node
    {
        newnode->next = head;
        head = newnode;
    }
    tail->next = head;
}
template<class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct node<T> *newnode = NULL;
    newnode = new node<T>;
    newnode->data = no;
    newnode->next = NULL;

    if ((head == NULL) && (tail == NULL)) // if LL is empty
    {
        head = newnode;
        tail = newnode;
    }
    else // if CLL contains at least one node
    {
        tail->next = newnode;
        tail = newnode;
    }
    tail->next = head;
}

template<class T>
void SinglyCLL<T>::InsertAtPos(T no, int iPos)
{
    int size = Count();

    struct node<T> *newnode = NULL;
    newnode = new node<T>;
    newnode->data = no;
    newnode->next = NULL;
    if (iPos < 1 && iPos > size + 1)
    {
        cout << "wrong position" << endl;
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(no);
    }
    else if (iPos == size + 1)
    {
        InsertLast(no);
    }

    else
    {
        node<T> *temp = head;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
template<class T>
void SinglyCLL<T>::DeleteFirst()
{
    if (head == NULL && tail == NULL)
    {
        return;
    }

    else if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        delete tail->next;
        tail->next = head;
    }
}
template<class T>
void SinglyCLL<T>::DeleteLast()
{
    if (head == NULL && tail == NULL)
    {
        return;
    }

    else if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        struct node<T> *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = head;
        tail = temp;
    }
}
template<class T>
void SinglyCLL<T>::DeleteAtPos(int iPos)
{
    int size = Count();
    if (iPos < 1 && iPos > size)
    {
        cout << "wrong position" << endl;
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == size)
    {
        DeleteLast();
    }

    else
    {
        struct node<T> *temp1 = head;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp1 = temp1->next;
        }
        struct node<T> *temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
}
template<class T>
void SinglyCLL<T>::Display()
{
    if (head == NULL && tail == NULL)
    {
        cout << "CLL is empty" << endl;
        return;
    }
    struct node<T> *temp = head;
    
    do
    {
        cout << "|" << temp->data << "|-> ";
        temp = temp->next;
    } while (temp != tail->next);           //or instead of tail->next,you can just write -> temp !=head

    cout << "NULL" << endl;
}

template<class T>
int SinglyCLL<T>::Count()
{
    int iCnt = 0;
    struct node<T> *temp = head;

    if (head == NULL && tail == NULL)
    {
        return iCnt;
    }
    else
    {
        do
        {
            iCnt++;
            temp = temp->next;
        } while (temp != tail->next);

        return iCnt;
    }
}

int main()
{
  /*   SinglyCLL <int>obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);
    obj.Display();
    int iRet = obj.Count();
    cout << "no of nodes " << iRet << endl;

    obj.InsertAtPos(4, 3);
    obj.InsertAtPos(500, 4);
    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout << "no of nodes " << iRet << endl;

    obj.InsertAtPos(55, 2);
    obj.Display(); */


    SinglyCLL<char> obj2;
    obj2.InsertLast('a');
    obj2.InsertLast('b');
    obj2.InsertLast('c');
    obj2.InsertLast('d');
    obj2.InsertFirst('Z');
    obj2.Display();
    return 0;
}