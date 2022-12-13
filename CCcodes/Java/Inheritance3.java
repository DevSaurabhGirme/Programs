import java.lang.*;

class Base
{
	public int i;
	public int j;

	public Base(int a, int b)
	{
		this.i = a;
		this.j = b;
	}
	
	public void fun()
	{
		System.out.println("Inside base fun");
	}
}

class Derived extends Base   //class Derived : public Base
{
	public int x;
	public int y;
	
	public Derived()
	{
		super(11,21);   //used 3rd time  //control from 34 to 15
		System.out.println("Inside Derived constructor");
		this.x = 30;
		this.y = 40;
	}
	
	public void sun()
	{
		System.out.println("Inside Derived sun");
		System.out.println(super.i);  //used 1st time
		super.fun();      //used 2nd time
	}
}  

class Inheritance3
{		
	public static void main(String A[])
	{
		System.out.println("Inside main");
		Derived dobj = new Derived();
		
		dobj.sun();
		
	}
}