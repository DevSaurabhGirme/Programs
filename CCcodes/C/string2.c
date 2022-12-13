#include<stdio.h>
#include<string.h>

int strlenX(char str[])
{
	int iCnt = 0;
	int iLength = 0;
	
	for(iCnt = 0; str[iCnt]!= '\0'; iCnt++)
	{
		iLength++;
	}
	
	return iLength;
}
int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter your name : \n");
	scanf("%s",Arr);
	
	printf("Entered name is : %s\n", Arr);
	iRet = strlenX(Arr);
	printf("String length is :%d\n",iRet);
	
	return 0;
}