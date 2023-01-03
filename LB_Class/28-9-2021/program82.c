#include<stdio.h>
#include<stdlib.h>

int SecondOccurence(int arr[], int iSize, int iNo)
{	
	int i = 0, index = -1;
	for(i = 0;i<iSize;i++)
	{	
		if(index<=2)
		{
			if(arr[i]==iNo)
			{ index = i; }
		index++;
		}
	}
	return index;
}

int main()
{
	int iLength = 0, i = 0, iValue = 0, iRet = 0;
	int *ptr = NULL;

	printf("Enter number of element\n");
	scanf("%d",&iLength);

	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i = 0;i<iLength;i++)
		{
		scanf("%d",&ptr[i]);
		}

	printf("Enter the element to search\n");
	scanf("%d",&iValue);

	printf("Enter numbers :\n");
	
	for(i = 0;i<iLength;i++)
		{
			printf("%d\t",ptr[i]);
		}
	iRet = SecondOccurence(ptr,iLength, iValue);
	if(iRet == -1)
	{ printf("There is no such number\n");  }
	else
	printf("FirstOccurence is :%d",iRet);
	free(ptr);
	return 0;
}