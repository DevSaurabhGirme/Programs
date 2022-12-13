#include<iostream>

using namespace std;

class Demo
{
	public :
	
	//below comments are called as name mangling(changing name)
		//and vary with compilers.

	//Addition@2ii
		int Addition(int no1, int no2)  //1000
		{
			int iAns = 0;
			iAns = no1 + no2;
			return iAns;
		}
	
	//Addition@3iii
		int Addition(int no1, int no2, int no3)  //2000
		{
			int iAns = 0;
			iAns = no1 + no2 + no3;
			return iAns;
		}
		
	//Addition4iiii
		int Addition(int no1, int no2, int no3, int no4)  //3000
		{
			int iAns = 0;
			iAns = no1 + no2 + no3 + no4;
			return iAns;
		}
};

int main()
{
	Demo obj;
	int iRet = 0;

	//Below are Assembly calls
	
	//PUSH 10
	//PUSH 11
	//CALL 1000
	iRet = obj.Addition(10,11);
	cout<<iRet<<"\n";
	
	//PUSH 10
	//PUSH 11
	//PUSH 12
	//CALL 2000
	iRet = obj.Addition(10,11,12);
	cout<<iRet<<"\n";
		
	//PUSH 10	
	//PUSH 11	
	//PUSH 12
	//PUSH 13
	//CALL 3000
	iRet = obj.Addition(10,11,12,13);
	cout<<iRet<<"\n";
	
	return 0;
}

/*
  1.) Changing number of arguments
      void fun(int ,int);
	  void fun(int, int, int);
 
  2.) Changing datatypes of arguments    
	  void fun(int ,int);
	  void fun(double, double);
	  
  3.) Changing sequence of arguments
	  void fun(int, char, float);
	  void fun(int, float, char);


// NOt allowed
  1.) Changing return value
      void int

	
*/