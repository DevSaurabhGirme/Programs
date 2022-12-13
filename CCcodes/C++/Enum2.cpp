#include<iostream>
using namespace std;

int main()
{
	enum Marvellous_Batches{PPA =0, LB=1, LSP=2, Python=3};
	const int Fees[] = {15000,16000,17000,18000};
	const float Duration[] = {3.5,4.0,3.5,4.5};
	int choice = 0;

	cout<<"Select the batch you want to join\n";
	cout<<"0 : PPA\n";
	cout<<"1 : Logic Building\n";
	cout<<"2 : Python\n";
	cout<<"3 : Linux System Programming\n";
	
	cin>>choice;
	
	switch(choice)
	{
		case PPA:
			cout<<"Thankyou for selecting PPA batch\n";
			cout<<"Duration is :"<<Duration[PPA]<<"\n";
			cout<<"Fees are :"<<Fees[PPA]<<"\n";
			break;
			
		case LB:
			cout<<"Thankyou for selecting Logic Building\n batch\n";
			cout<<"Duration is :"<<Duration[LB]<<"\n";
			cout<<"Fees are :"<<Fees[LB]<<"\n";
			break;

		case Python:
			cout<<"Thankyou for selecting Python batch\n";
			cout<<"Duration is :"<<Duration[Python]<<"\n";
			cout<<"Fees are :"<<Fees[Python]<<"\n";
			break;

		case LSP:
			cout<<"Thankyou for selecting LSP batch\n";
			cout<<"Duration is :"<<Duration[LSP]<<"\n";
			cout<<"Fees are :"<<Fees[LSP]<<"\n";
			break;	
	}
	
}