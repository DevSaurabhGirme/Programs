import java.lang.*;

class Demo extends Thread
{
	public void run()      // running state
	{
		for(int i = 0; i<10; i++)
		{
			System.out.println("Value of i : "+i);
			try
			{
				Thread.sleep(3000);
			}
			catch(Exception obj)
			{}
		}
	}
}

class Mythread5
{
	public static void main(String Sd[])
	{	
		Demo obj1 = new Demo();
		Thread t1 = new Thread(obj1);    //new state
		
		t1.start();      //Runnable State
		
		// Dead state(here after for oop is executed)
	}
}