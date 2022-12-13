#include<iostream>
using namespace std;

class Demo
{
	public :
		int i;
	private :
		int j;
	protected :
		int k;
};

class Hello : public Demo
{
	public :
		int x;
	private :
		int y;
	protected :
		int z;
	
};

int main()
{
	Demo obj;
	dobj.i;
	dobj.j;
	dobj.k;
	
	Hello hobj;
	hobj.x;
	hobj.y;
	hobj.z;
	
	hobj.i;
	hobj.j;
	hobj.k;
	
	return 0;
}
