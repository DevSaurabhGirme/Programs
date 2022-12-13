#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Arr[5];   //static memory allocation
	int size = 0;
	int *ptr = NULL;
	
	printf("Enter no. of elements: ");
	scanf("%d",&size);
	
	ptr = (int *)calloc(size , sizeof(int));   //Step 1 : Allocate the memory
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}
	
	// Step 2: Use the memory according to the problem statment
	
	free(ptr);   //Step 3: Free the memory
	return 0;
	
}