#include<stdio.h>

int fun(char *str)
{
	int iCnt = 0;

	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{

	char Arr[20];
	int iRet = 0; 
	
	printf("Enter your name \n");
	scanf("%[^'\n']s",Arr);
	iRet = fun(Arr);
	printf("Length of string is :%d\n",iRet); 
	return 0;
}