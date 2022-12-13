#include<iostream>
using namespace std;

class Demo
{
	public:
		void fun(int *p)
		{
			cout<<"First defintion";
		}
		void fun(float *p)
		{
			cout<<"Second defintion";
		}
		void fun(int no)
		{
			cout<<"Third defintion";
		}
};

int main()
{
	int no = 10;
	float f = 3.14;
	
	Demo obj;	//error due to '()' in this line 
	
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	
	return 0;
}