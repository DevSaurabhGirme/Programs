#include "header58.h"

ULONG Power(int iNo1,int iNo2)
{
	register int iCnt = 0;
	ULONG iMult = 1;
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}