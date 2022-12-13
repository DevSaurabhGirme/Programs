import java.io.*;

class Input3
{
	public static void main(String a[]) throws IOException 
	{
		InputStreamReader iobj = new InputStreamReader(System.in);
		BufferedReader bobj = new BufferedReader(iobj);
		
		System.out.println("Enter String");
		String str = bobj.readLine();
		
		System.out.println("Enter Integer");
		int no = Integer.parseInt(bobj.readLine());
		
		System.out.println("Enter float");
		float f = Float.parseFloat(bobj.readLine());

		System.out.println("Enter Double");
		double d = Double.parseDouble(bobj.readLine());
		
		System.out.println("Entered string is :" +str);
				System.out.println("Entered integer is :" +no);
						System.out.println("Entered float is :" +f);
								System.out.println("Entered double is :" +d);
	}
}