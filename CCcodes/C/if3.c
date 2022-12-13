#include<stdio.h>


int main()
{
	auto int iStd = 0;	

	printf("Enter your standard\n");
    scanf("%d",&iStd);	
	
	if(iStd == 1)
	{
		printf("Your exam is at 8am\n");
	}
	else if(iStd == 2)
	{
		printf("Your exam is at 9am\n");
	}
	else if(iStd ==3)
	{
		printf("Your exam is at 10am\n");
	}
	else if(iStd ==4)
	{
		printf("Your exam is at 11am\n");
	}
	else if(iStd ==5)
	{
		printf("Your exam is at 12pm\n");
	}
	else
	{
		printf("Invalid standard\n");
	}
	
	return 0;
}