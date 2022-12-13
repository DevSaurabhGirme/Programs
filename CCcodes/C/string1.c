#include<stdio.h>
#include<string.h>

int main()
{
	//way 1
	char Arr[5] = {'a','b','c','d','\0'};
	
	//way 2
	char Brr[5] = "abcd";
	char Crr[8] = "Saurabh";
 	
	printf("%s\n",Brr);
	printf("%s\n",Arr);
	printf("%s\n",Crr);
	
	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);
	
	printf("Size of string Arr is: %d\n",sizeof(Arr));
	printf("Size of string Brr is: %d\n",sizeof(Brr));
	
	printf("Length of string is %d\n",strlen(Arr));
	printf("Length of string is %d\n",strlen(Brr));
	return 0;
}