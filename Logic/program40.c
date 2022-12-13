#include<stdio.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iCntFactor = 0; 
	
	for(iCnt =1; iCnt <=(iNo/2); iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				iCntFactor++;
			}
		}	
	return iCntFactor;	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);

	iRet = CountFactor(iValue);
	printf("Number of factors are : %d",iRet);
	
	return 0;
}	