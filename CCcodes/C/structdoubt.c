#include<stdio.h>

struct outer
{	
	int i;
	float f;
	struct inner
	{
		int x;
		float g;
	};
};
int main()
{
	struct outer obj;

	printf("%d\n",sizeof(obj));
}

