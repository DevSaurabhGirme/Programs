using namespace std;

#include <iostream>

class Base
{
	public:
		int i,j;
		
		virtual void fun()
		{
			cout<<"Base fun\n";		//1000
		}
		
		virtual void gun()				//2000
		{
			cout<<"Base gun\n";
		}
		
		void sun()							//3000
		{
			cout<<"Base sun\n";
		}
};

class Dervied: public Base
{
	public:
		int x,y;
		
		void fun()				//4000
		{
			cout<<"Dervied fun\n";
		}
		
		void sun()				//5000
		{
			cout<<"Dervied sun\n";
		}
		
		virtual void run()		//6000
		{
			cout<<"Dervied run\n";
		}
};

int main()
{
	Base bobj;
	Dervied dobj;
	
	cout<<sizeof(bobj)<<"\n";				//16 bytes
	cout<<sizeof(dobj)<<"\n";				//24 bytes
	
	long int *op = (long int*)(&dobj);	//100
	
	cout<<"Base address of dobj is :"<<op<<"\n";		
	
	long int *vptr = (long int*)(*op);			//400
	
	cout<<"Adress of VTABLE is :"<<vptr<<"\n";
	
	void(*fp)();		// fp = function ptr
	
	fp = (void(*)())(*vptr);			//1000
	fp();
	
	fp = (void(*)())(*(vptr+1));		//2000
	fp();
	
	fp = (void(*)())(*(vptr+2));		//6000
	fp();
	
	return 0;
}