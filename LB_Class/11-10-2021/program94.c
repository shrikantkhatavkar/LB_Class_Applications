#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool flag = true;
	start = str;
	end = str;

	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<end)
	{
		if(*start != *end)
		{
			flag = false;
			break;
		}
		start++;
		end--;
	}
	return flag;	
}

int main()
{
	char Arr[30];
	bool bRet = 0;
 
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);

	bRet = CheckPallindrome(Arr); // CheckPallindrome(50)
	
	if(bRet == true)
	{
		printf("It is pallindrome\n");
	}
	else
	{
		printf("It is not pallindrome\n");	
	}		

	return 0;
}