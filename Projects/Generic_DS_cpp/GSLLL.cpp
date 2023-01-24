/////////////////////////////////////////////////////////////
///////////////////
////   Below is the generic Singly Linear LinkedList code////
///    Name   :   Saurabh Girme	 						  ///
///    Date   :   15/06/2022      						  ///
///    Time   :   3:33 pm         						  ///
///////////////////
/////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
struct node         // structure declaration
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL    										 // class declaration
{
	private:           										 // characteristics
		struct node<T> *Head;
		int Count;
		
	public:	         										 //behaviours
		SinglyLL();  										 //constructor
		void InsertFirst(T);
		void InsertLast(T);
		void Display();
		int CountNode();
		void DeleteFirst();
		void DeleteLast();
		void InsertAtPos(T, int pos);
		void DeleteAtPos(int pos);
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T value)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = value;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T value)
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn -> data = value;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node <T> *temp = Head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	struct node <T>*temp = Head;
	if(Head == NULL)
	{
		return;
	}
	
	temp = temp -> next;
	delete Head;
	Head = temp;
	
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	struct node<T> *temp = Head;
	struct node<T> *tempdel = NULL;
	
	if(Head -> next == NULL)
	{
		delete Head;
		Head = NULL;
	}
	else 
	{
		while((temp -> next -> next) != NULL)
		{
			temp  = temp -> next;
		}
		tempdel = temp -> next;
		temp -> next = NULL;
		delete tempdel;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::InsertAtPos(T value, int pos)
{
	if(Head == NULL)
	{
		return; 
	}
	
	struct node<T> *temp = Head;
	struct node<T> *newn = NULL;
	newn = new node<T>;
	newn -> data = value;
	newn -> next = NULL;
	
	if((pos <= 0) || (pos > (Count +1)))
	{
		return;
	}
	
	if(pos == 1)
	{
		InsertFirst(value);
	}
	else if(pos == Count)
	{
		InsertLast(value);
	}
	else
	{
		for(int iCnt = 1; iCnt < (pos - 1); iCnt++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next = newn;
		
		Count++;
	}
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	if((pos <1 ) || (pos > Count +1))
	{
		return;
	}
	if(pos == 1)
	{
		DeleteFirst();
	}
	else if(pos == Count)
	{
		DeleteLast();
	}
	
	else
	{
		struct node<T>* temp  = Head;
		struct node<T>* tempdel  = NULL;
		
		for(int iCnt = 1; iCnt < (pos - 1); iCnt++)
		{
			temp = temp -> next;
		}
		tempdel = temp -> next;
		temp -> next = temp -> next -> next;
		delete tempdel;
		
		Count--;
	}
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Nodes of the Linked List are : "<<endl;
	struct node <T> *temp = Head;
	while(temp != NULL)
	{
		cout<<"| "<<temp -> data<<" | ->";
		temp = temp -> next;
	}
	cout<<" NULL"<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}



////////////////////////	END	////////////////////////////