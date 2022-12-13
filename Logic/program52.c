#include<stdio.h>

int SumOfEvenDigits(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		
		if((iDigit % 2) == 0)
		{
			iSum = iSum + iDigit; 
		}
		iNo = iNo/10;
	}
	return iSum;
}

int main()
{
	int iValue= 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = SumOfEvenDigits(iValue);
	printf("Sum of Digits is :%d",iRet);
	
	return 0;
}