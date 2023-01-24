/////////////////////////////////////////////////////////////
///////////////////
////   Below is the generic Doubly Circular LinkedList code////
///    Name   :   Saurabh Girme	 						    ///
///    Date   :   20/06/2022      						    ///
///    Time   :   4:30 pm         						    ///
///////////////////
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct node   // structure declaration
{
    T data;
    struct node *next;
    struct node *prev;
};

template<class T>
class DoublyCLL
{
    private:
        struct node <T>*Head;
        struct node <T>*Tail; 
        int Count;

    public:
        DoublyCLL();
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
DoublyCLL<T>::DoublyCLL()   // constructor 
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template<class T>
void DoublyCLL<T>::InsertFirst(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn -> data = value;
    newn -> next = NULL; 
    newn -> prev = NULL;

    if((Head == NULL) && (Tail == NULL))     // CLL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else                                     // CLL aleast contains one node
    {
        newn -> next = Head;
        newn -> prev = Tail;
        Head = newn;
    }
    Head -> prev = Tail;
    Tail -> next= Head;

    Count++;
}


template <class T>
void DoublyCLL<T>::InsertLast(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn -> data = value;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((Head == NULL) && (Tail ==NULL))
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail -> next = newn;
        newn -> prev = Tail;
        
        Tail = newn;
    }
    Head -> prev = Tail;
    Tail -> next = Head;

    Count++;
}

template<class T>
void DoublyCLL<T>::DeleteFirst()
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
        delete (Tail -> next);
    }

    Head -> prev = Tail;
    Tail -> next = Head;

    Count--;
}   


template <class T>
void DoublyCLL<T>::DeleteLast()
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
        Tail = Tail -> prev;
        delete Tail -> next;
    }
    Head -> prev = Tail;
    Tail -> next = Head;

    Count--;
}


template<class T>
void DoublyCLL<T>::InsertAtPos(T value,int pos)
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
        struct node<T> *temp2 = Tail;
        struct node<T>*newn = NULL;
        newn = new node<T>;

        newn -> data = value;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(int i = 1; i < (pos-1);i++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp->next->prev = newn;
        newn -> prev = temp;
        temp -> next = newn;

        Count++;
  
    }
}

template <class T>
void DoublyCLL<T>::DeleteAtPos(int pos)
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
        for(int i = 1; i < (pos-1); i++)
        {
            temp = temp -> next;
        }
        temp -> next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        Count--;
    }
}

template <class T>
void DoublyCLL<T>::Display()
{
    struct node <T>*temp = Head;

    for(int i =1; i <= Count; i++)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next; 
    }
    cout<<" NULL "<<endl;
}

template <class T>
int DoublyCLL<T>::CountNode()
{
    return Count;
}

int main()
{
    DoublyCLL <int>obj1;

    obj1.InsertFirst(111);
    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of nodes in Linked List are : "<<obj1.CountNode()<<endl;

    obj1.InsertLast(121);
    obj1.InsertLast(151);

    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode()<<endl;

    obj1.DeleteFirst();
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << endl;

    obj1.InsertAtPos(75, 4);
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << endl;

    obj1.DeleteLast();
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << endl;

    obj1.DeleteAtPos(4);
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << endl;

    return 0;
}

///////////////////////////////////    END   ///////////////////////////////////