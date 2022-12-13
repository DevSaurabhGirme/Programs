#include<iostream>
using namespace std;

class Base
{
	public:
		int x,j;

		void fun()    //1000    //Concrete non-virtual
		{
			cout<<"Base fun"<<"\n";
		}
		virtual void gun() //2000 //Concrete virtual
		{
			cout<<"Base gun"<<"\n";
		}
		virtual void sun() //3000 //Concrete virtual
		{
			cout<<"Base sun"<<"\n";
		}
		//____
		virtual void run()=0; //abstract function
};

class Derived : public Base
{
	public : 
		int i,j;
	
	//4000
	void fun()              //redefinition(concrete) funtion
	{
		cout<<"Derived fun"<<"\n";
	}
	//5000
	virtual void gun()      //overriding
	{
		cout<<"Derived gun"<<"\n";
	}
	//6000
	void run()              //concrete function
	{
		cout<<"Derived run"<<"\n";
	}
};

int main()
{
	//Base bobj;      //NA
	Derived dobj;     //A 
	
	Base *bp = NULL;
	bp = &dobj;       //Upcasting
	
	cout<<sizeof(Derived)<<"\n";
	cout<<sizeof(Base)<<"\n";
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	
	return 0;
}
