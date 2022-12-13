#include<stdio.h>

auto int a = 10;

void gun()
{
	register float fValue = 20.3;
	
	printf("Value of fValue is &f",fValue);
}

int main()
{
	printf("Inside main");
	
	gun();
	
	return 0;
}
