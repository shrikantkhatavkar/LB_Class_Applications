#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
	    return (iNo ^ ( (0XFFFFFFFF << (iStart -1)) & (0xFFFFFFFF >> (32 - iEnd)) ));
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

	iRet = ToggleRange(iValue, iReg1, iReg2);
	cout<<"Updated number is :"<<iRet<<endl;
	return 0;
}