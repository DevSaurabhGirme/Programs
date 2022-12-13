#include<stdio.h>

int main()
{
	char cValue ='M';
	char *cptr = &cValue;
	
	int iValue = 21;
	int *iptr = &iValue;
	
	float fValue = 10.11;	
	float *fptr = &fValue;

	double dValue = 11.12;
	double *dptr = &dValue;
	
	printf("%c\n",*cptr);
	printf("%d\n",*dptr);
	printf("%d\n",*&cValue);

		
		
	return 0;

}