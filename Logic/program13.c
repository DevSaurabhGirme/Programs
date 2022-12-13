// Program to dispay Hello world 5 times

#include <stdio.h>

// Demonstration of ITERATION   

void Display()
{
	/*1 = initialization
    2 = Condition
	3 = Displacement
	4 = Loop Body
*/
	
    int iCnt = 0;

    //           1           2          3     
    for (iCnt = 1;  iCnt <= 5;  iCnt++)
    {
        printf("Hello\n");    //4
    }

}

//1 243 243 243 243 2


int main()
{
    Display();
	
    return 0;
}


