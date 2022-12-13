#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	Demo()
	{
		cout<<"Inside Default constructor\n";
	}
	
	~Demo()
	{
		cout<<"Inside Desructor\n";
	}
	
	void fun()
	{
		cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj;          //Static object creation
	
	Demo *ptr = NULL; 
	
	ptr = new Demo;    //Dynamic object creation

	obj.fun();
	
	ptr->fun();
	
	delete ptr;
}


	