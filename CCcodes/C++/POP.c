#include<stdio.h>

int Addition(int iNO1,int iNO2)
{
    auto int iAns=0;
	iAns = iNO1 + iNO2;
       
	return iAns;
}

int Subtraction(int iNO1,int iNO2)
{
    auto int iAns = 0;
	iAns = iNO1 - iNO2;
       
	return iAns;
}



int main()
{
	 auto int iValue1 = 0,iValue2 = 0, iRet = 0;
	 
	 printf("Enter first number\n");
	 scanf("%d",&iValue1);
	 
	 printf("Enter second number\n");
	 scanf("%d",&iValue2);
	 
	 iRet = Addition(iValue1,iValue2);
	 printf("Addition is : %d\n",iRet);
	 
	 iRet = Subtraction(iValue1,iValue2);
	 printf("Subtraction is : %d\n",iRet);
	 
	 return 0;	 
}	    

//below 4 are same

//Function
//Method
//Procedure
//API Application programming interface 

