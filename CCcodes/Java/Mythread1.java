import java.lang.*;

class Mythread1
{
	public static void main(String asda[])
	{
		System.out.println("Inside main");
		
		Thread tobj = Thread.currentThread();
		
		System.out.println("Name of current thread is : "+tobj.getName());
	}
}
