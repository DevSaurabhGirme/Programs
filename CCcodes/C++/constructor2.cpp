#include<iostream>

using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo()  //Default constructor
	{
		cout<<"Inside Default constructor\n";
		x = 0;
		y = 0;
	}
	Demo(int i,int j)  //parameterized constructor
	{
		cout<<"Inside parameterized constructor\n";
		x = i;
		y = j;
	}
 
    Demo(Demo &ref)  //Copy constructor
	{
		cout<<"Inside copy constructor\n";
		x = ref.x;
		y = ref.y;
		
	}

    ~Demo()  //Destructor
	{
		cout<<"Inside Destructor\n";
	}
};

	int main()
	{
		Demo obj1(11,21);
		
		Demo obj2(obj1);
		
		return 0;
		
	}