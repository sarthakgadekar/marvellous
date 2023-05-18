#include <iostream>
using namespace std;

struct NODE
{
    int data;
    NODE *next;

    NODE(int data)
    {
        this->data = data;
        next = NULL;
    }
};

typedef NODE *PNODE;

class SinglyLL
{
    PNODE head;

public:
    SinglyLL();
    void insertAtFirst();
    void insertAtLast();
    void Display();
    int Count();
    void deleteAtFirst();
    void deleteAtLast();
    void insertAtPos();
    void deleteAtPos();
};

SinglyLL::SinglyLL()
{
    head = NULL;
}

void SinglyLL::insertAtFirst()
{
    int iValue;
    cout << "enter value to be inserted at front of LL \n";
    cin >> iValue;
    PNODE newnode = new NODE(iValue);

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void SinglyLL::insertAtLast()
{
    int iValue;
    cout << "enter data to LL\n";
    cin >> iValue;
    PNODE newnode = new NODE(iValue);

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        PNODE temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void SinglyLL::deleteAtFirst()
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }

    else
    {
        NODE *temp = head;
        head = head->next;
        delete temp;
    }
}

void SinglyLL::deleteAtLast()
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }

    else
    {
        /*  PNODE temp=head;
         while(temp->next->next != NULL)
         {
             temp=temp->next;
         }
                 OR */

        PNODE temp = NULL;
        for (temp = head; temp->next->next != NULL; temp = temp->next)
        {
        }
        delete temp->next;
        temp->next = NULL;
    }
}

void SinglyLL::insertAtPos()
{
    int iPos;
    cout << "enter position" << endl;
    cin >> iPos;
    int size = Count();
    if (iPos < 1 || iPos > size + 1)
    {
        cout << "Invalid position" << endl;
        return;
    }
    if (iPos == 1)
    {
        insertAtFirst();
    }
    else if (iPos == size + 1)
    {
        insertAtLast();
    }
    else
    {
        int iCnt;
        int iValue;
        cout << "enter data" << endl;
        cin >> iValue;
        NODE *temp = head;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }

        NODE *newnode = new NODE(iValue);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void SinglyLL::deleteAtPos()
{
    int iPos;
    cout << "enter position" << endl;
    cin >> iPos;
    int size = Count();
    if (iPos < 1 || iPos > size)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (iPos == 1)
    {
        deleteAtFirst();
    }

    else if (iPos == size)
    {
        deleteAtLast();
    }

    else
    {
        int iCnt;
        PNODE temp = head;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        PNODE saveAddr = temp->next;
        temp->next = saveAddr->next;
        delete saveAddr;
    }
}

int SinglyLL::Count()
{
    NODE *temp = head;
    int iCnt = 0;
    while (temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}

void SinglyLL::Display()
{
    NODE *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    SinglyLL obj;

    while (1)
    {

        cout << "1.insert at first" << endl;
        cout << "2.insert at last" << endl;
        cout << "3.delete at first" << endl;
        cout << "4.delete at last" << endl;
        cout << "5.insert at position" << endl;
        cout << "6.delete at position" << endl;
        cout << "7.display LL" << endl;
        cout << "8.terminate the aplication" << endl<<endl;
        int iChoice;
        cout << "enter your choice" << endl;
        cin >> iChoice;

        switch (iChoice)
        {
        case 1:
            obj.insertAtFirst();
            break;
        case 2:
            obj.insertAtLast();
            break;
        case 3:
            obj.deleteAtFirst();
            break;
        case 4:
            obj.deleteAtLast();
            break;
        case 5:
            obj.insertAtPos();
            break;
        case 6:
            obj.deleteAtPos();
            break;
        case 7:
            obj.Display();
            break;
        case 8:
            exit(0);
        default:
            cout << "enter proper choice" << endl;
        }
    }
}