#include<stdio.h>

struct Demo
{
	int i;
	float f;
	int j;
	char ch;
};

int main()
{
	printf("%d\n",sizeof(struct Demo));
	
	return 0;
}