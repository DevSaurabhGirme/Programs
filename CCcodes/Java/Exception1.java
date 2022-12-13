import java.util.*;

class Exception1
{
	public static void main(String asr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter First number :");
		int no1 = sobj.nextInt();
		
		System.out.println("Enter Second number :");
		int no2 = sobj.nextInt();
		
		int ians = no1 / no2;
		
		System.out.println("Division is :" +ians);
	}
}