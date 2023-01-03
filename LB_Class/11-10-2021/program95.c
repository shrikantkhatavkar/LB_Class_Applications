#include<stdio.h>
#include<stdbool.h>
bool CheckPallindrome(char *str)
{
	char *end = NULL;
	end = str;

	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(str<end)
	{
		if(*str != *end)
		{
			break;
		}
		str++;
		end--;
	}

	if(str<end)
	{
		return false;
	}
	else
	{
		return true;
	}	
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