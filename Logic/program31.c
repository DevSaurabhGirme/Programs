//Accept number from user and display its factors
//Input : 10
//Outut :  1  2  5


#include<stdio.h>

void DisplayFactors(int iNo)
{
	int iCnt = 0;
		
		if(iNo <= 0)
		{
			iNo = -iNo;
		}
		for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				printf("%d ",iCnt);
			}
		}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	return 0;
}


//Time Complexity : O(N/2)