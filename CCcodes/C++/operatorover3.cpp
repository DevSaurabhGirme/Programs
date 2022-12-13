#include<iostream>
using namespace std;

class Demo
{
	public:
		int x,y;
		
		Demo(int i =10, int j =20)
		{
			x=i;
			y=j;
		}
};


int main()
{
	Demo obj1(11,21);
	Demo obj2(51,101);
	
	if(obj1 == obj2)
	{
		cout<<"Objects are same\n";
	}else
	{
		cout<<"Objects are different\n";
	}
	
	return 0;
}
/* Here == operator causes error due userdefined operands are used 
   to resolve it refer operatorover4 code*/