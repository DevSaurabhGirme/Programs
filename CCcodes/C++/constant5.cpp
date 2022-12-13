#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;          //constant characteristic
		
		Demo(int a,int b) : j(b)
		{
			i = a;
		}		
		void fun()
		{
			cout<<"Inside fun\n";
			i++;    //A
			cout<<i<<"\n";
			//j++;  //NA
		}
		
		//b is constant input parameter
		void gun(int a,const int b) const
		{
			int x = 10;
			const int y = 20;  //constant local variable
			
			cout<<"Inside gun\n";
			//i++;    //NA
			//j++;  //NA
			
			x++;    //A
			cout<<x<<"\n";
			//y++;    //NA
			
			a++;    //A
			cout<<a<<"\n";
			cout<<b<<"\n";
			//b++;    //NA due to line 21's 1st const
		}
};
	
int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);
   
	obj1.fun();
	obj1.gun(10,20);
	
	//obj2.fun();
	obj2.gun(12,23);
	
	return 0;
}