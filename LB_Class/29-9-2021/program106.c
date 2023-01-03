#include<stdio.h>

int SpaceChar(char *str)
{
	int iCnt = 0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{  
			iCnt++;
		}
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

	iRet = SpaceChar(Arr); 
	printf("Spaces are : %d\n",iRet);
	return 0;
}
