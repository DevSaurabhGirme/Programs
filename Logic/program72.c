#include<stdio.h>
#include<stdlib.h>

int NSummation(int Arr[], int iLength)
{
	int iCnt = 0,iSum = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = iSum +Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int * ptr = NULL;
	int iSize = 0,iRet = 0;
	int iCnt = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter elements of array :\n");
	for(iCnt  = 0; iCnt < iSize ;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = NSummation(ptr,iSize);
	printf("Summation is :%d", iRet);
	
	free(ptr);
	
	return 0; 
}