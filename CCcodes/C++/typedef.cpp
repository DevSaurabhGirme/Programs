#include<iostream>
using namespace std;

int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	
	NUMBER no = 10;
	LETTER ch = 'S';
	
	cout<<sizeof(no)<<"\n";
	cout<<sizeof(ch)<<"\n";
	
	typedef const int* CPTR;
	// const int *p = NULL;
	CPTR p = &no;
	p = &no;
	
	cout<<no;
	cout<<ch;
	
	cout<<*p<<"\n";
	
	return 0;
}