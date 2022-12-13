#include<iostream>
using namespace std;

class Demo
{
	public:
		void fun(int i)
		{
			cout<<"First defintion";
		}
		void fun(int i, int j)
		{
			cout<<"Second defintion";
		}
};

int main()
{
	Demo obj();   //error due to '()' in this line 
	obj.fun(10);
	obj.fun(10,11);
	
	return 0;
}