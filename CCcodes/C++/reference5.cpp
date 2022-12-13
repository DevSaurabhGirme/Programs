#include<iostream>

using namespace std;

int main()
{
	int Arr[] = {10,20,30,40};
	
	int (&Brr)[4] = Arr; 
	
	cout<<Brr[0];
	return 0;
}

//Brr is another name of integer array Arr