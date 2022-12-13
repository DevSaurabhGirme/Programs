#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
   // printf("%d\n",bRet);   returns 0  or 1 as fasle or true in output
    if(bRet == true) 
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }
    return 0; 

}