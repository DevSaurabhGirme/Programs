#include<stdio.h>
#include<stdlib.h>

int SearchLastOcurance(int Arr[], int iLength, int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iLength-1; iCnt >= 0; iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
		return iCnt;
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
	
	iRet =SearchLastOcurance(ptr,iSize,iValue);
	if(iRet == -1)
	{
		printf("element is not present in array \n");
	}
	else
	{
		printf("Elemnt last occured at : %d\n",iRet);
	}
	
	free(ptr);
	
	return 0;
}