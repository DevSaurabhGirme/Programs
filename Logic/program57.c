#include<stdio.h>

unsigned long int Power(int iNo1,int iNo2)
{
	register int iCnt = 0;
	unsigned long int iMult = 1;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	auto unsigned long int lRet = 0;
	
	printf("Enter base number : ");
	scanf("%d",&iValue1);
	
	printf("Enter power : ");
	scanf("%d",&iValue2);
	
	lRet = Power(iValue1,iValue2);
	printf("Exponential number is : %ld\n",lRet);
	
	return 0;
}