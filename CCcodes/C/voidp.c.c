#include<stdio.h>

int main()
{
	int iValue = 10;
	float fValue = 10.11;
	char cValue = 'S';
	double dValue = 20.11;
	
	void*ptr = NULL;
	
	ptr =&iValue;
	printf("%d\n",*(int*)ptr);
	
	ptr = NULL;
	ptr =&fValue;
	
	printf("%f\n",*(float*)ptr);
	ptr = NULL;
	
	return 0;

}