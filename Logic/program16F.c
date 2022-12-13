// Program to dispay Hello world 5 times

#include <stdio.h>

// Demonstration of ITERATION   

void Display(int iNo)
{	
    int iCnt = 0;
	if(iNo<0)   //Filter
	{
		printf("Please enter positive number\n");
		return;
	}
	
    //           1           2          3     
    for (iCnt = 1;  iCnt <= iNo;  iCnt++)
    {
        printf("Hello\n");    //4
    }

}

//1 243 243 243 243 2

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

    Display(iValue);            //Function Call
	
    return 0;
}


