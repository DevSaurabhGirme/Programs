#include<stdio.h>

int DisplaySumOfFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet = DisplaySumOfFactors(iValue);
	printf("Sum of Factors is : %d\n",iRet);
	
	return 0;
}