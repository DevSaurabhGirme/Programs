#include<stdio.h>

//first way
struct Demo
{
	int i;
	int j;
};

struct Hello  //outer structure
{
	float f;
	int no;
	struct Demo dobj;  //inner structure
};

int main()
{
	struct Hello hobj;
	
	hobj.f = 10.11;
	hobj.no = 11;
	hobj.dobj.i = 21;
	hobj.dobj.j = 51;

	printf("%d\n",hobj.dobj.i);
	
	return 0;
}