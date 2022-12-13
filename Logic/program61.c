#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
	int iTemp = 0, iCnt = 0, iMult = 1; 
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
		iNo = iNo/10;
	}
	
	iNo = iTemp;
	
	while(iNo != 0)
	{
		iMult = 1;
		iDigit = iNo % 10;
		
		for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
			{
				iMult = iMult * iDigit;
			}
		
		iSum = iSum + iMult; 
		iNo = iNo / 10;
	}
	
	if(iSum == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}0

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