#include<iostream>
using namespace std;

class Demo
{
	public:
		int x,y;
			Demo()
			{
				cout<<iCnt++<<"\n";
			}
			~Demo()
			{
				cout<<iCnt--<<"\n";
			}
	private:
		static int iCnt;
		
		static int count()
		{
			return iCnt;
		}
};
int Demo::iCnt=0;

int main()
{
	cout<<Demo::count();
	
	return 0;
}
