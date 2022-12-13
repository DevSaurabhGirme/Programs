import java.lang.*;

abstract class RBI
{
	public int Balance;

	public RBI()    //constructor
	{
		this.Balance=0;
	}
	
	public void Credit(int Amount)   //Concrete method
	{
		this.Balance = this.Balance + Amount;
	}
	
	public void Debit(int Amount)
	{
		this.Balance = this.Balance - Amount;
	}
	
	public abstract int CalculateInterest();   //Abstract method
}

class SBI extends RBI
{
	public int AccountNumber;
	public int IFSC;
	
	public int CalculateInterest()
	{
		return 6;
	}
}

class PNB extends RBI
{
	public int AccountNumber;
	public int IFSC;
	
	public int CalculateInterest()  //Concrete method
	{
		return 7;
	}
}

class AbstractDemo
{
	public static void main(String agg[])
	{
		PNB pobj = new PNB();
		SBI sobj = new SBI();
		
		pobj.Credit(2000);
		pobj.Debit(1000);
		
		System.out.println(pobj.Balance);    //1000

	}
}