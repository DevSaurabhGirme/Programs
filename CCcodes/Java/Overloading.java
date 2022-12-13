import java.lang.*;

class Demo
{
	public int Add(int i,int j)
	{
		return i + j;
	}
	public int Add(int i,int j, int k)
	{
		return i + j + k;
	}
	public int Add(int i,int j, int k ,int l)
	{
		return i + j + k + l;
	}
}

class Overloading
{
	public static void main(String a[])
	{
	Demo obj = new Demo();
	int ret = 0;
	
	ret = obj.Add(10,20);
	System.out.println(ret);
	
	ret = obj.Add(10,20,30);
	System.out.println(ret);
	
	ret = obj.Add(10,20,30,40);
	System.out.println(ret);
	}
}