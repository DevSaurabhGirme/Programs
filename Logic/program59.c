#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1,int iNo2)
{
	register int iCnt = 0;
	int iMult = 1;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}

bool CheckArmstrong(int iNo)
{
	int iTemp = 0;
	int iDigCnt = 0, iDigit = 0,iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	// Calculate number of digits
	while(iNo != 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	}
	
	iNo = iTemp;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + Power(iDigit,iDigCnt); 
		iNo = iNo / 10;
	}
	
	if(iSum== iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = CheckArmstrong(iValue);
	if(bRet == true)
	{
		printf("Number is Armstrong");
	}
	
	else
	{
		printf("Number is not Armstrong");
	}
	
	return 0;
}