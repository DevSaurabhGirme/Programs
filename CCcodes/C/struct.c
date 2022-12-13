#include<stdio.h>

// strucyure declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;	
};

int main()
{
	struct Demo obj2={10,10.11,21};

	//structure object creation
	struct Demo obj1;
    
	//Object initializatin
	obj1.iNo = 51;
	obj1.fValue = 20.11;
	obj1.iValue = 21;


	struct Demo*p = NULL;
	p = &obj1;
	
	printf("%d\n",obj1.iNo);   //21
	printf("%d\n",obj2.iNo);
	printf("Address of object is: %d\n",&obj2);
	printf("pointer p points to :%u\n",&obj1);
	return 0;

}