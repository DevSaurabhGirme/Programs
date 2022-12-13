#include<stdio.h>

int main()
{
	int A = 12;
	
	const int B = 25;
	
	A++;   //Allowed
	//B++; not allowed
	
	A = 20;
	
	printf("%d",A);
	
	return 0;
	
}