#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT SwapByte(UINT iNo)
{
	UINT iMask = 0x00FFFF00;
	UINT iTemp = iNo & iMask;

	UINT Byte1 = iNo<<24;
	UINT Byte4 = iNo>>24;

	UINT iResult = iTemp | Byte1 | Byte4 ;
	
	return iResult;
}


int main()
{
	register UINT iValue = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;
	iRet = SwapByte(iValue);
	cout<<"Updated number is :"<<iRet<<endl;
	return 0;
}