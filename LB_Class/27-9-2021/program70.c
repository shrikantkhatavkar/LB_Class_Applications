#include<stdio.h>
#include<stdlib.h>

int SumOdd(int arr[], int iSize)
{
	int i = 0, iSum = 0;
	for(i = 0; i<iSize;i++)
	{
		if((arr[i]%2)!=0)
		{  iSum = iSum +arr[i]; }
	}
	return iSum;
}

int main()
{
	int iLength = 0, i = 0, iRet = 0;
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
	iRet = SumOdd(ptr,iLength);
	printf("Addition of odd elements is :%d\n",iRet);
	free(ptr);
	return 0;
}