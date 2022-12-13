#include<iostream>

using namespace std;

int main()
{
	int Arr[10];
	
	int*p = NULL;
	
	//p = (int*)malloc(sizeof(int)*10);  // C
	
	p = new int[10];  //C++
	if(p == NULL)
	{
		cout<<"Unable to locate memory\n";
	}
	else
	{
		cout<<"Memory gets allocated at address "<<p<<"\n";
	}
	
	//free(p);
	
	delete []p;
	
	return 0;
}