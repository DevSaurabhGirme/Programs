#include<iostream>
using namespace std;

class Base
{
	public:
		int i;
		float f;
		double d;
		
		void fun()
		{}
		void gun()
		{}
};

class Derived : public Base
{
	public : 
		int i;
		double d;
		
		void sun()
		{}
};

int main()
{
	Base bobj;
	Derived dobj;
	
	cout<<sizeof(bobj)<<"\n";
	cout<<sizeof(dobj)<<"\n";
	
	return 0;
}