#include<stdio.h>

char CapitalCount(char *str)
{
	int iCnt = 0;
	while(*str!='\0')
	{
		if( (*str >='A') && (*str<='Z') )
		{  iCnt++;  }
	str++;
	}
	return iCnt;
}

int main()
{	
	char Arr[20];
	int iRet = 0;

	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);

	iRet = CapitalCount(Arr);

	printf("Capital letter Count is :%d\n",iRet); 
	return 0;
}
