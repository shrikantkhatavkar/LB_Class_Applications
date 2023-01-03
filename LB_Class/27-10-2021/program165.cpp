#include<iostream>
using namespace std;

typedef unsigned int UINT;


void DisplayByte(UINT iNo)
{
	UINT Byte1 = iNo & 0x000000FF;

	UINT Byte2 = iNo & 0x0000FF00;

	Byte2 = Byte2>>8;
	
	UINT Byte3 = iNo & 0x00FF0000;

	Byte3 = Byte3>>16;

	UINT Byte4 = iNo & 0xFF000000;

	Byte4 = Byte4>>24;

	cout<<"Byte - 1 = "<<Byte1<<endl;
	cout<<"Byte - 2 = "<<Byte2<<endl;
	cout<<"Byte - 3 = "<<Byte3<<endl;
	cout<<"Byte - 4 = "<<Byte4<<endl;
}


int main()
{
	register UINT iValue = 0, iRet = 0;
	cout<<"Enter number"<<endl;
	cin>>iValue;
	DisplayByte(iValue);
	return 0;
}