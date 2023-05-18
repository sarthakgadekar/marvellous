#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class Queue
{
public:
    struct node<T> *Head;
    int Count;

    Queue();
    void Enqueue(T); // InsertLast
    void Dequeue();  // DeleteFirst
    void Display();
    int CountNode();
};

template <class T>
Queue<T>::Queue()
{
    Head = NULL;
    Count = 0;
}

template <class T>
void Queue<T>::Enqueue(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if (Head == NULL)
    {
        Head = newn;
    }
    else
    {
        struct node<T> *temp = Head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
    Count++;
}

template <class T>
void Queue<T>::Dequeue()
{
    T no;
    if (Head == NULL) // or count==0
    {
        cout << "queue is empty" << endl;
        return;
    }
    no = Head->data;
    struct node<T> *temp = Head;
    Head = Head->next;
    delete temp;
    Count--;
    cout << "removed element is : " << no << endl;
}

template <class T>
void Queue<T>::Display()
{
    struct node<T> *temp = Head;
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}

template <class T>
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
    Queue<int> obj1;
    obj1.Enqueue(10);
    obj1.Enqueue(20);
    obj1.Enqueue(30);
    obj1.Enqueue(40);
    obj1.Enqueue(50);
    obj1.Display();
    obj1.Dequeue();
    obj1.Dequeue();
    obj1.Dequeue();
    obj1.Display();
    obj1.Enqueue(60);
    obj1.Enqueue(70);
    obj1.Display();
    int iRet=obj1.CountNode();
    cout<<"no of elements in queue "<<iRet<<endl;
    return 0;
}