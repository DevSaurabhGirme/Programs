import java.lang.*;
import java.util.*;

class Input
{
	public static void main(String srg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter your Name");
		String Name = sobj.nextLine();
		
		System.out.println("Enter your Age");
		int Age = sobj.nextInt();
		
		System.out.println("Enter your Percentage");
		float percentage = sobj.nextFloat();
		
		System.out.println("Your Name is : "+Name);
		System.out.println("Your Age is : "+ Age);
		System.out.println("Your precentage is :"+ percentage);




	}
}