#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[], int iSize)
{	int iMin = arr[0];
	for(int i = 1; i<iSize;i++) ////you can start i from 1 insted of o bcoz iMin is set at arr[0]
	{
		if(arr[i] < iMin)
		{  iMin = arr[i];}
	}
	return iMin;
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
	iRet = Minimum(ptr,iLength);
	printf("minimum number is :%d\n",iRet);
	free(ptr);
	return 0;
}