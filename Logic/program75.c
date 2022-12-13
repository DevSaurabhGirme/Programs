#include<stdio.h>
#include<stdlib.h>

//negative input handling

int MinNumber(int Arr[], int iLength)
{
	int iCnt = 0;
	int iMin  = Arr[0];
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMin  > Arr[iCnt])
		{
			iMin  = Arr[iCnt];
		}
	}
	return iMin ;
}

int main()
{
	int * ptr = NULL;
	int iSize = 0,iRet = 0;
	int iCnt = 0;
	
	printf("Enter size :\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));

	printf("Enter elements of array :\n");
	for(iCnt  = 0; iCnt < iSize ;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet =MinNumber(ptr,iSize);
	printf("Minimum number is :%d\n", iRet);
	
	free(ptr);
	
	return 0;  
}