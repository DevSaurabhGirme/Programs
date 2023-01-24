/////////////////////////////////////////////////////////////
///////////////////
////   Below is the generic Queue code                   ////
///    Name   :   Saurabh Girme	 						  ///
///    Date   :   20/06/2022      						  ///
///    Time   :   3:33 pm         						  ///
///////////////////
/////////////////////////////////////////////////////////////

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
private:
    struct node<T> *Head;
    int Count;

public:
    Queue();
    void Enqueue(T);    // Logic same as InsertLast of LinkedList
    void Dequeue();        // Logic same as DeleteFirst 
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
void Queue<T>::Enqueue(T value)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = value;
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

template<class T>
void Queue<T>::Dequeue()         // Same as DeleteFirst
{
    T temp;

    if(Head == NULL)  // if(Count == 0)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
   
    temp = Head-> data;
    struct node<T> *temppt = Head;
    Head = Head -> next;
    delete temppt;

    Count--;
    cout << "Removed element is : " << temp << endl;
}

template <class T>
void Queue<T>::Display()
{
    cout << "Nodes of the Queue are : " << endl;
    struct node<T> *temp = Head;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " | ->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

template <class T>
int Queue<T>::CountNode()
{
    return Count;
}

int main()
{
    Queue <int>obj1;
    obj1.Enqueue(11);
    obj1.Enqueue(21);
    obj1.Enqueue(51);
    obj1.Enqueue(101);
    obj1.Enqueue(111);
    obj1.Enqueue(121);

    obj1.Display();
    cout<<"Number ofelements in queue are : "<<obj1.CountNode()<<endl;

    obj1.Dequeue();
    obj1.Dequeue();
    obj1.Dequeue();

    obj1.Display();
    cout << "Number ofelements in queue are : " << obj1.CountNode() << endl;

    obj1.Dequeue();
    obj1.Dequeue();

    cout << "Number ofelements in queue are : " << obj1.CountNode() << endl;

    return 0;
}