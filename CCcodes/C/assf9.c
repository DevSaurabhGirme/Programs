#include<stdio.h>

int main()
{
	int arr[6] = {10,20,30};
	int no = 2;
	
	//printf("%d\n",arr[no]);
	//printf("%d\n",arr[3-1]);
	printf("%d\n",arr);
	printf("%d\n",arr+1);
	printf("%d\n",(&arr)+1);
	printf("%d\n",arr+3);
	printf("%d\n",&(arr[3]));
	
	printf("%d\n",arr[4]);

	
	
}