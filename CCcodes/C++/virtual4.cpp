#include<iostream>
using namespace std;

class Base
{
	public: 
		int x,y;
		
		void fun()
		{
			cout<<"Base fun\n";
		}
		void gun()
		{
			cout<<"Base gun\n";
		}
};

class Derived : public Base
{
	public:
		int i,j;
		
		void sun()
		{
			cout<<"Derived sun"<<"\n";
		}
		virtual void fun()
		{
			cout<<"Derived fun\n";
		}
};

int main()
{
	Base *bp = new Derived();   //Upcasting
	
	bp->fun();
	bp->gun();
	//bp->sun(); //not allowed
	
	cout<<sizeof(Base)<<"\n";    //8
	cout<<sizeof(Derived)<<"\n"; //16
	return 0;
}