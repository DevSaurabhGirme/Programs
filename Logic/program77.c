#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	bool bFlag = false;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			bFlag = true;
			break;
		}
	}
	return bFlag;
}

int main()
{
	int * ptr = NULL;
	int iSize = 0,bRet = 0,iValue = 0;
	int iCnt = 0;
	
	printf("Enter size :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter elements of array :\n");
	for(iCnt  = 0; iCnt < iSize ;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter number to be found:\n");
	scanf("%d",&iValue);
	
	bRet =Search(ptr,iSize,iValue);
	if(bRet == true)
	{
		printf("number is present\n");
	}
	else
	{
		printf("Number is not present");
	}
	
	free(ptr);
	
	return 0;
}