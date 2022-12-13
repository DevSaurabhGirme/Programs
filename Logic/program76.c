#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[], int iLength, int iNo)
{
	int iCnt = 0, iFrequency =0;
	
	for(int iCnt = 0; iCnt < Arr[iCnt]; iCnt++)
	{
		if(iNo == Arr[iCnt])
		{
			iFrequency++;
		}
	}
	return iFrequency;
}


int main()
{
	int * ptr = NULL;
	int iSize = 0,iRet = 0,iValue = 0;
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
	
	iRet =CountFrequency(ptr,iSize,iValue);
	printf("Frequency of number is :%d\n", iRet);
	
	free(ptr);
	
	return 0;
}