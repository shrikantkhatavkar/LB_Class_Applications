#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int arr[], int iSize)
{	
	int i = 0;
	bool bAns = false;
	for(i = 0;i<iSize;i++)
	{
		if(arr[i]==11)
		{ 
			bAns = true;
			break;
		}
	}
	return bAns;
}

int main()
{
	int iLength = 0, i = 0; 
	bool bRet = false;
	int *ptr = NULL;

	printf("Enter number of element\n");
	scanf("%d",&iLength);

	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i = 0;i<iLength;i++)
		{
		scanf("%d",&ptr[i]);
		}

	printf("Enter data is :\n");
	
	for(i = 0;i<iLength;i++)
		{
			printf("%d\t",ptr[i]);
		}
	bRet = CheckNumber(ptr,iLength);
	if(bRet == true)
	{ printf("Number is present"); }
	else
	{ printf("Number is absent"); }
	free(ptr);
	return 0;
}