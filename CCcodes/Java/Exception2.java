import java.util.*;

class Exception2
{
	public static void main(String asr[])
	{
		int ians = 0,no1 = 0,no2 = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First number :");
		 no1 = sobj.nextInt();
		
		System.out.println("Enter Second number :");
		no2 = sobj.nextInt();

		try
		{
			ians = no1 / no2;     //Exception prone code
		}
		catch(ArithmeticException obj)
		{
			System.out.println("Exception occured as :  "+obj);
		}
		finally
		{
			System.out.println("");
		}
		System.out.println("Division is :" +ians);
	}
}