#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CountBit(UINT iNo)
{
	int  i= 0, iCnt = 0, iResult = 0;
	int iMask = 0x000000001;

	for(i = 1; i<32; i++)
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask<<1;
	}
	return iCnt;
}


int main()
{
	register UINT iValue = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;

	iRet = CountBit(iValue);
	cout<<"Number of bits which are ON  :"<<iRet<<endl;
	return 0;
}