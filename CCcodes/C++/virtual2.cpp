#include<iostream>
using namespace std;

class Base
{
	public: 
		int x,y;
};

class Dervied : public Base
{
	public:
		int i,j;
};

int main()
{
	Base *bp = new Base();       //no casting
	Dervied *dp = new Dervied(); //no casting
	
	Base *bp1 = new Dervied();   //Upcasting
	Dervied *dp1 = new Base();   //Downcasting /not allowed
	
	return 0;
}