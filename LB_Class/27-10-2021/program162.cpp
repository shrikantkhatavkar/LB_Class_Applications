#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT ToggleOnRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF, iMask = 0, iResult = 0;

	iMask1 = iMask1<<(iStart -1);
	iMask2 = iMask2>>(32 - iEnd);

	iMask = iMask1&iMask2;
	
	iResult = iNo|iMask;

	return iResult;	

}
//iStart = 5
//iEnd = 16

// 	0000	0000	0000	0000	0000	0000	0000	0000
//	0000	0000	0000	0000	1111	1111	1111	0000


int main()
{
	register UINT iValue = 0, iReg1 = 0, iReg2 = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;

	cout<<"Enter the starting position of bit"<<endl;
	cin>>iReg1;

	cout<<"Enter the ending position of bit"<<endl;
	cin>>iReg2;

	iRet = ToggleOnRange(iValue, iReg1, iReg2);
	cout<<"Updated number is :"<<iRet<<endl;
	return 0;
}