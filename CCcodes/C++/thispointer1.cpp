//parameterized constructor with default argument

#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a = 10,int b = 20)
	{
		x = a;
		y = b;
	}
	
	//void fun(Demo *this, int no)
	void fun(int no) //1000
	{
		cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj3(11,21);
	obj.fun(51);	
	/*
	internal conversion
	fun(&obj,51);
	fun(100,51);
	
	
	*/
	
	return 0;
}