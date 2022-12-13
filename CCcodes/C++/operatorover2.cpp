#include<iostream>
using namespace std;

class Demo
{
	public:  //private
		int x,y;
		
		Demo(int i =10, int j =20)
		{
			x=i;
			y=j;
		}
		
		friend Demo operator + (Demo op1 ,Demo op2);
};

Demo operator + (Demo op1 ,Demo op2)
{
	cout<<"Inside + operator\n";
	return Demo(op1.x + op2.x, op1.y + op2.y);
}

Demo operator - (Demo op1 ,Demo op2)
{
	cout<<"Inside - operator\n";
	return Demo(op1.x - op2.x, op1.y - op2.y);
}

Demo operator * (Demo op1 ,Demo op2)
{
	cout<<"Inside * operator\n";
	return Demo(op1.x * op2.x, op1.y * op2.y);
}

Demo operator / (Demo op1 ,Demo op2)
{
	cout<<"Inside / operator\n";
	return Demo(op1.x / op2.x, op1.y / op2.y);
}

int main()
{
	Demo obj;
	Demo obj1(11,21);
	Demo obj2(51,101);
	Demo robj(0,0);
	Demo robj1(0,0);
	Demo robj2(0,0);
	Demo robj3(0,0);
	
	robj = obj1 + obj2;  
    	//internal conversion
	    //robj= +(obj1,obj2);
	
	robj1 = obj1 - obj2;  
	robj2 = obj1 * obj2;  
	robj3 = obj1 / obj2;  
	
	cout<<obj.x<<"\n";   //10
	cout<<obj.y<<"\n";   //20
	cout<<robj2.x<<"\n";  //62
	cout<<robj2.y<<"\n";  //122
	
	return 0;
}