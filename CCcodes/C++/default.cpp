#include<iostream>
using namespace std;

float Area(float fRadius, float Pi = 3.14)
{
	float fAns = 0.0;
	fAns = Pi *fRadius* fRadius;
	return fAns;
}

int main()
{
	float fRet = 0.0;
	
	fRet = Area(10.4,7.2);
	cout<<fRet<<"\n";
	
	fRet = Area(10.6);
	cout<<fRet<<"\n";
	
	return 0;
}