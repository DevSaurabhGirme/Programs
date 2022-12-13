#include<stdio.h>

struct Demo
{
	int i;
	float f;
	int j;
};

union Hello
{
	int i;
	float f;
	int j;
};	

int main()
{
	struct Demo dobj;
	union Hello hobj;
	
	dobj.i = 11;
	dobj.j = 21;
	
	hobj.i = 11;
	hobj.j = 21;
	hobj.i = 51;
	
	printf("%d\n",hobj.i);
	printf("%d\n",hobj.j);
	printf("%d\n",dobj.i); 
	
	printf("%d\n",sizeof(hobj));
	printf("%d\n",sizeof(dobj));
	
	return 0;
	
	
	
	
}
