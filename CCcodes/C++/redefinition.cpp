#include<iostream>
using namespace std

class Demo
{
	public:
		int i,j;
		
		void fun()   //Definition
		{
			cout<<"Inside fun\n";
		}
		void gun()   //Definition
		{
			cout<<"Inside gun\n";
		}
};
class Hello : public Demo
{
	public:
		int x,y;
		
		void sun()   //Definition
		{
			cout<<"Inside sun\n";
		}
		
		void gun()   //Redefinition
	//the above concept remains redef even if we change	
	//number of parameters	
		{
			cout<<"Inside gun child\n";
		}
		
};

int main()
{
	return 0;
}