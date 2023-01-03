#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT SwapByte(UINT iNo)
{	
	return (iNo & 0x00FFFF00) | (iNo << 24) | (iNo >> 24);
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