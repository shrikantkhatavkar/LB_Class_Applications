#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT ToggleBit(UINT iNo, int iPos1, int iPos2)
{
	int iMask1 = 0x00000001, iMask2 = 0x00000001, iMask = 0, iResult = 0;
	iMask1 = iMask1<<(iPos1 -1);
	iMask2 = iMask2<<(iPos2 -1);
	
	iMask = iMask1 | iMask2;
	iResult = iNo^iMask;
	return iResult;
}

int main()
{
	register UINT iValue = 0, iPos1 = 0, iPos2 = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;

	cout<<"Enter the first position of bit"<<endl;
	cin>>iPos1;

	cout<<"Enter the second position of bit"<<endl;
	cin>>iPos2;

	iRet = ToggleBit(iValue, iPos1, iPos2);
	cout<<"Updated number is :"<<iRet<<endl;
	return 0;
}