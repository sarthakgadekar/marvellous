// typedef cannot be used with template

#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
public:
    node<T> *head;
    int count;

    SinglyLL();
    void insertFirst(T);
    void insertLast(T);
    void Display();
    int CountNode();
    void insertAtPos(T, int);
    void deleteAtFirst();
    void deleteAtLast();
    void deleteAtPos(int);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    head = NULL;
    count = 0;
}

template <class T>
void SinglyLL<T>::insertFirst(T iNo)
{
    struct node<T> *newnode = NULL;
    newnode = new node<T>;

    newnode->data = iNo;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    count++;
}

template <class T>
void SinglyLL<T>::insertLast(T iNo)
{
    struct node<T> *newnode = NULL;
    newnode = new node<T>;

    newnode->data = iNo;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node<T> *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    count++;
}

template <class T>
void SinglyLL<T>::Display()
{
    cout << "LL elements are : " << endl;
    struct node<T> *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

template <class T>
int SinglyLL<T>::CountNode()
{
    return count;
}

template <class T>

void SinglyLL<T>::insertAtPos(T iNo, int iPos)
{
    if (iPos < 1 || iPos > count + 1)
    {
        cout << "INVALID POSITION !!" << endl;
        return;
    }
    else if (iPos == 1)
    {
        insertFirst(iNo);
    }
    else if (iPos == count + 1)
    {
        insertLast(iNo);
    }

    else
    {
        struct node<T> *newnode = NULL;
        newnode = new node<T>;
        newnode->data = iNo;
        newnode->next = NULL;

        struct node<T> *temp = head;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

template <class T>

void SinglyLL<T>::deleteAtFirst()
{
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }

    else
    {
        struct node<T> *temp = head;
        head = head->next;
        delete temp;
    }
}

template <class T>

void SinglyLL<T>::deleteAtLast()
{
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }

    else
    {
        struct node<T> *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
}

template <class T>
void SinglyLL<T>::deleteAtPos(int iPos)
{
    if (iPos < 1 || iPos > count)
    {
        cout << "invalid position" << endl;
        return;
    }
    else if (iPos == 1)
    {
        deleteAtFirst();
    }
    else if (iPos == count)
    {
        deleteAtLast();
    }

    else
    {
        struct node<T> *temp = head;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        struct node<T> *tempDelete = temp->next;
        temp->next = temp->next->next;
        delete tempDelete;
    }
}
int main()
{
    SinglyLL<int> obj1;
    obj1.insertLast(10);
    obj1.insertLast(20);
    obj1.insertLast(30);
    obj1.insertLast(40);
    obj1.insertLast(50);
    obj1.insertAtPos(65, 2);
    obj1.deleteAtPos(2);
    obj1.deleteAtLast();
    obj1.Display();
    obj1.CountNode();
    SinglyLL<float> obj2;
    return 0;
}