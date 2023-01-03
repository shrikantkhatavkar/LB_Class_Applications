#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT ToggleNibble(UINT iNo)
{
	UINT iMask = 0xf000000f, iResult = 0;
	iResult = iNo^iMask;
	return iResult;
}

int main()
{
	register UINT iValue = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;

	iRet = ToggleNibble(iValue);

	//printf("%u",iRet);	

	cout<<"Updated number is :"<<iRet<<endl;
	return 0;
}