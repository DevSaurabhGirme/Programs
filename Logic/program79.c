#include<stdio.h>
#include<stdlib.h>

int SearchFirstOcurance(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
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
	
	iRet =SearchFirstOcurance(ptr,iSize,iValue);
	if(iRet == -1)
	{
		printf("element is not present in array \n");
	}
	else
	{
		printf("Elemnt first occured at : %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}