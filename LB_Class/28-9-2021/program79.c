#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(int arr[], int iSize, int iNo)
{	
	int i = 0;
	for(i = 0;i<iSize;i++)
	{
		if(arr[i]==iNo)
		{ break;}
	}
	if(i==iSize)
	{return -1;}
	else
	{ return i;}
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
	iRet = FirstOccurence(ptr,iLength, iValue);
	if(iRet == -1)
	{ printf("There is no such number\n");  }
	else
	printf("FirstOccurence is :%d",iRet);
	free(ptr);
	return 0;
}