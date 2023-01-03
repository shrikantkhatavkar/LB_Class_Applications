#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
	UINT iMask =0x00000001;
	UINT iResult = 0;
	
	if( (iPos<1 || iPos >32 ) )
	{	return false;	}

	iMask = iMask<<(iPos -1);
	iResult = iNo & iMask;

	if(iResult & iMask)
	{	return true;	}
	else
	{	return false;	}	
}

int main()
{
	UINT iValue1 = 0, iValue2 = 0;
	bool bRet = false;

	printf("Enter number\n");
	scanf("%d",&iValue1);

	printf("Enter Position\n");
	scanf("%d",&iValue2);
	
	bRet = CheckBit(iValue1, iValue2);

	if(bRet == true)
	{
		printf("bit is ON\n");
	}
	else
	{
		printf("bits is OFF\n");
	}
	return 0;
}



