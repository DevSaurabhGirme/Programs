#include<stdio.h>
#include<stdlib.h>

//negative input handling

int MaxNumber(int Arr[], int iLength)
{
	int iCnt = 0;
	int iMax = Arr[0];
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
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
	
	iRet =MaxNumber(ptr,iSize);
	printf("Maximum number is :%d\n", iRet);
	
	free(ptr);
	
	return 0;  
}