/////////////////////////////////////////////////////////////
///////////////////
////   Below is the generic Singly Circular LinkedList code////
///    Name   :   Saurabh Girme	 						    ///
///    Date   :   15/06/2022      						    ///
///    Time   :   8:21  pm         						    ///
///////////////////
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct node   // structure declaration
{
    T data;
    struct node *next;
};

template<class T>
class SinglyCLL
{
    private:
        struct node <T>*Head;
        struct node <T>*Tail; 
        int Count;

    public:
        SinglyCLL();
        void InsertFirst(T value);
        void InsertLast(T value);
        void InsertAtPos(T value,int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        int CountNode();
        void Display();    
};

template <class T>
SinglyCLL<T>::SinglyCLL()   // constructor 
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn -> data = value;
    newn -> next = NULL; 

    if((Head == NULL) && (Tail == NULL))     // CLL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else                                     // CLL aleast contains one node
    {
        newn -> next = Head;
        Head = newn;
    }
    Tail -> next= Head;

    Count++;
}


template <class T>
void SinglyCLL<T>::InsertLast(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn -> data = value;
    newn -> next= NULL;

    if((Head == NULL) && (Tail ==NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail -> next = newn;
        Tail = newn;
    }
    Tail -> next = Head;

    Count++;
}

template<class T>
void SinglyCLL<T>::DeleteFirst()
{
    if((Head== NULL) && (Tail == NULL))
    {
        return;
    }
    else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head -> next;
        delete Tail->next;

        Tail -> next= Head;
    }
    Count--;
}   


template <class T>
void SinglyCLL<T>::DeleteLast()
{
    if ((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    else if (Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        struct node<T>*temp = Head;

        while(temp ->next != Tail)
        {
            temp = temp -> next;
        }
        delete Tail;
        Tail = temp;
        temp->next = Head;
    }
    Count--;
}


template<class T>
void SinglyCLL<T>::InsertAtPos(T value,int pos)
{
    if((pos < 1) || (pos > Count +1))
    {
       return;    
    }
    if(pos == 1)
    {
        InsertFirst(value);
    }
    else if(pos == Count + 1)
    {
        InsertLast(value);
    }
    else
    {
        struct node<T>*temp = Head;
        struct node<T>*newn = NULL;
        newn = new node<T>;

        newn -> data = value;
        newn -> next = NULL;

        for(int i = 1;i < (pos-1); i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;

        Count++;
    }
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
{
    if ((pos < 1) || (pos > Count + 1))
    {
        return;
    }
    if (pos == 1)
    {
        DeleteFirst();
    }
    else if (pos == Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T>*temp =Head;
        struct node<T> *tempdel = NULL;
        for(int i = 1; i < (pos-1); i++)
        {
            temp = temp -> next;
        }
        tempdel = temp->next;
        temp->next= temp->next->next;
        delete tempdel;

        Count--;
    }
}

template <class T>
void SinglyCLL<T>::Display()
{
    struct node <T>*temp = Head;

    if((Head ==NULL) && (Tail ==NULL))
    {
        return;
    }

    do
    {
        cout<<"| "<<temp->data<<" |";
        temp = temp->next; 
    }while((temp) != Head);// temp !=(Tail -> next)

    cout<<endl;
}

template <class T>
int SinglyCLL<T>::CountNode()
{
    return Count;
}

///////////////////////////////////    END   ///////////////////////////////////