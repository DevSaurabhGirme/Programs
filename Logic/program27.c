#include<stdio.h>

void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("Your Bill amount is 4000\n");
            break;

        case 2:
            printf("Your Bill amount is 8000\n");
            break;

        case 5:
            printf("Your Bill amount is 20000\n");
            break;

        case 10:
            printf("Your Bill amount is 40000\n");
            break;

        default:
            printf("Invalid Weight");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter gold coin size to be purchased :\n");
    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}