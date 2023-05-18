#include "Header163.h"
DoublyCLL::DoublyCLL()
{
    head = NULL;
    tail = NULL;
    CntNode = 0;
}
void DoublyCLL::insertFirst(int iNo)
{
    PNODE newnode = NULL;
    newnode = new NODE(iNo);
    if (CntNode == 0)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    head->prev = tail;
    tail->next = head;

    CntNode++;
}

void DoublyCLL::insertLast(int iNo)
{
    PNODE newnode = NULL;
    newnode = new NODE(iNo);
    if (CntNode == 0)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    head->prev = tail;
    tail->next = head;

    CntNode++;
}

void DoublyCLL::insertAtPos(int iNo, int iPos)
{
    PNODE newnode = NULL;
    newnode = new NODE(iNo);
    if (iPos < 1 || iPos > CntNode + 1)
    {
        cout << "INVALID position" << endl;
        return;
    }
    if (iPos == 1)
    {
        insertFirst(iNo);
    }
    else if (iPos == CntNode + 1)
    {
        insertLast(iNo);
    }

    else
    {
        /* PNODE temp = NULL;
        int iCnt = 0;
        for (iCnt = 1, temp = head; iCnt < iPos; iCnt++)
        {
            temp = temp->next;
        }
        newnode->prev=temp->prev;
        newnode->next=temp;
        temp->prev->next=newnode;
        temp->prev=newnode; */

        PNODE temp = head;
        int iCnt = 0;
        for (iCnt = 1; iCnt < iPos - 1; iCnt++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;

        CntNode++;
    }
    head->prev = tail;
    tail->next = head;
}

void DoublyCLL::deleteFirst()
{
    if (CntNode == 0)
    {
        cout << "LL is empty" << endl;
        return;
    }

    else if (CntNode == 1)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }

    else
    {
        head = head->next;
        delete head->prev;
    }
    CntNode--;
    head->prev = tail;
    tail->next = head;
}
void DoublyCLL::deleteLast()
{
    if (CntNode == 0)
    {
        cout << "LL is empty" << endl;
        return;
    }

    else if (CntNode == 1)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }

    else
    {
        tail = tail->prev;
        delete tail->next;
    }
    CntNode--;
    head->prev = tail;
    tail->next = head;
}
void DoublyCLL::deleteAtPos(int iPos)
{
    if(iPos<1 || iPos > CntNode)
    {
        return;
    }
    if (iPos== 1)
    {
        deleteFirst();
    }

    else if (iPos==CntNode)
    {
        deleteLast();
    }

    else
    {
        PNODE temp=head;
        int iCnt=0;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        CntNode--;

    }
    head->prev = tail;
    tail->next = head;
}

void DoublyCLL::Display()
{
    PNODE temp = head;
    int iCnt = 0;
    for (iCnt = 1; iCnt <= CntNode; iCnt++)
    {
        cout << "|" << temp->data << "|->";
        temp = temp->next;
    }
    cout << endl;
}

int DoublyCLL::Count()
{
    return CntNode;
}