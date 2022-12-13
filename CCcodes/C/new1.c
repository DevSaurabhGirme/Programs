#include<stdio.h>

int main()
{
	double arr[] = {10,20,30,40,50};
	
	double *p = &arr[3];
	printf("%d\n",sizeof(p));
	printf("%d\n",sizeof(*p));

	return 0;
	
}