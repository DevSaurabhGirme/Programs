#include<iostream>
using namespace std;

class Base
{
	public:
		int x,y;
		
		Base()
		{
			cout<<"Inside base constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base destructor\n";
		}
		void fun()
		{
			cout<<"Inside base fun\n";
		}
};
class Derived : public Base
{
	public :
			int i,j;
	Derived()
	{
	cout<<"Inside derived constructor\n ";
	}
	~Derived()
	{
	cout<<"Inside derived destructor\n ";
	}
	void gun()
	{
	cout<<"Inside derived gun\n";
	}
};

int main()
{
	Derived dobj;
	
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	
	dobj.fun();
	dobj.gun();
	
	return 0;
}