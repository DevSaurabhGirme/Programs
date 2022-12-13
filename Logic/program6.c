#include<stdio.h>

int Addition(int,int);

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