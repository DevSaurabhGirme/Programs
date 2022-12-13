//Write program for addition of two numbers

#include<stdio.h>

///////////////////////////////////////
//
//Function Name: Addition
//Description:   Used to perform addition of 2 numbers
//Input:         Integer, Integer
//Output:        Integer
//Date:          12/04/2022
//Author:        Saurabh Yashwant Girme 
//
///////////////////////////////////////

int Addition(int iValue1, int iValue2)   //Dukan
{
	int iAns = 0;
	iAns = iValue1 + iValue2;
	return iAns;
}

////////////////////////////////////////
//
//Write program for addition of two numbers
//
////////////////////////////////////////

int main()     //Apla ghar
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	
	printf("Enter first no.\n");
	scanf("%d",&iNo1);
	
	printf("Enter second no.\n");
	scanf("%d",&iNo2);

	iRet = Addition(iNo1,iNo2);
	
	printf("Addition is %d\n",iRet);
	
	return 0;
}

/////////////////////////////////////////
//
// Input:   11   10
// Output:  21
//
/////////////////////////////////////////