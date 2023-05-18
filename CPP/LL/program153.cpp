#include <iostream>
#include<chrono>
using namespace std :: chrono;

auto start = high_resolution_clock::now(); // Start time
// Code snippet
auto stop = high_resolution_clock::now(); // Stop time
auto duration = duration_cast<microseconds>(stop - start); // Duration

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyCLL
{
private:
    PNODE head; // characteristics
    PNODE tail;

public: // behaviours
    SinglyCLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void Display();
    int Count();
};

SinglyCLL::SinglyCLL() // default constructor because its not accepting anythiing
{
    head = NULL;
    tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
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
void SinglyCLL::InsertLast(int no)
{
    PNODE newnode = NULL;
    newnode = new NODE;
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
void SinglyCLL::InsertAtPos(int no, int iPos)
{
    int size = Count();

    PNODE newnode = NULL;
    newnode = new NODE;
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
        PNODE temp = head;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void SinglyCLL::DeleteFirst()
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
void SinglyCLL::DeleteLast()
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
        PNODE temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = head;
        tail = temp;
    }
}
void SinglyCLL::DeleteAtPos(int iPos)
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
    else if (iPos == size )
    {
        DeleteLast();
    }

    else
    {
        PNODE temp1=head;
        int iCnt=0;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        PNODE temp2=temp1->next;
        temp1->next=temp2->next;
        delete temp2;
    }
}
void SinglyCLL::Display()
{
    if (head == NULL && tail == NULL)
    {
        cout << "CLL is empty" << endl;
        return;
    }
    PNODE temp = head;
    do
    {
        cout << "|" << temp->data << "|-> ";
        temp = temp->next;
    } while (temp != tail->next);

    cout << "NULL" << endl;
}
int SinglyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = head;

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
    SinglyCLL obj;
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

    obj.InsertAtPos(4,3);
    obj.InsertAtPos(500,4);
    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout << "no of nodes " << iRet << endl;

    obj.InsertAtPos(55, 2);
    obj.Display();

    return 0;
}