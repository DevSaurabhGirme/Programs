#include<stdio.h>

int DisplayNoofDigits(int iNo)
{
	int iCnt = 0;
	
	while(iNo > 0)
	{
		iCnt++;
		iNo = iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue =0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = DisplayNoofDigits(iValue);
	printf("Number of Digits are :%d\n",iRet);
	
	return 0;
}