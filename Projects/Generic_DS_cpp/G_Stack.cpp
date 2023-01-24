/////////////////////////////////////////////////////////////
///////////////////
////   Below is the generic Stack code                   ////
///    Name   :   Saurabh Girme	 						  ///
///    Date   :   18/06/2022      						  ///
///    Time   :   11:30 am         						  ///
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
class Stack
{
private:
    struct node<T> *Head;
    int Count;

public:
    Stack();
    void Push(T);        // Logic same as InsertFirst of LinkedList
    void Pop();              // Logic same as DeleteFirst 
    void Display();
    int CountNode();
   
};

template <class T>
Stack<T>::Stack()
{
    Head = NULL;
    Count = 0;
}


template <class T>
void Stack<T>::Push(T value)  // Same as InsertFirst
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = value;
    newn->next = NULL;

    newn -> next = Head;
    Head = newn;

    Count++;
}

template<class T>
void Stack<T>::Pop()         // Same as DeleteFirst
{
    T temp;

    if(Head == NULL)  // if(Count == 0)
    {
        cout<<"Stack is empty"<<endl;
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
void Stack<T>::Display()
{
    cout << "Nodes of the Stack are : " << endl;
    struct node<T> *temp = Head;
    while (temp != NULL)
    {
        cout << "| " << temp->data << " | ->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

template <class T>
int Stack<T>::CountNode()
{
    return Count;
}

int main()
{
    Stack <char>obj1;
    obj1.Push('F');
    obj1.Push('E');
    obj1.Push('D');
    obj1.Push('C');
    obj1.Push('B');
    obj1.Push('A');

    obj1.Display();
    cout<<"Number of elements in Stack are : "<<obj1.CountNode()<<endl;

    obj1.Pop();
    obj1.Pop();
    obj1.Pop();

    obj1.Display();
    cout << "Number ofelements in Stack are : " << obj1.CountNode() << endl;

    obj1.Pop();
    obj1.Pop();
    obj1.Push('Z');
    obj1.Pop();

    obj1.Pop();

    cout << "Number ofelements in Stack are : " << obj1.CountNode() << endl;

    return 0;
}