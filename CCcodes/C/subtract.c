#include<stdio.h>

int Subtract(int no1,int no2)
{ 
    int Ans=0;
    Ans=no1-no2;
  
    return Ans;
}
int main()
{
    int A=12, B=9;
    int C=0;
    C=Subtract(A,B);
  
    printf("%d",C);
    return 0;
}