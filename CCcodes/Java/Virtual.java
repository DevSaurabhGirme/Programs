import java.lang.*;

class Base
{
	public int i,j;
	
	public void fun()     //Definition
	{  
		System.out.println("Base fun");
	}
	public void gun()     //Definition
	{  
		System.out.println("Base gun");
	}
	public void sun()     //Definition
	{  
		System.out.println("Base sun");
	}
}

class Derived extends Base
{
	public int x,y;
	
	public void fun()      //Overriding
	{
		System.out.println("Derived fun");
	}
	public void sun()      //Overriding
	{
		System.out.println("Derived sun");
	}
	public void run()       //Overriding
	{
		System.out.println("Derived run");
	}
}

class Virtual
{
		public static void main(String a[])
		{
			//Base bobj = new Base();       //No Casting  Base*bp = new Derived();
			//Derived dobj = new Derived(); //No Casting
			
			Base obj1 = new Derived();   //Upcasting
			//Derived obj2 = new Base(); //Downcasting
		
			obj1.fun();    //bp -> fun()
			obj1.gun();
			obj1.sun();
			//obj1.run();
			
		}	
}