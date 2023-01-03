#include<stdio.h>
#include<stdlib.h>

int Difference(int arr[], int iSize)
{	
	int iMin = arr[0], iMax = arr[0];
	for(int i = 0; i<iSize;i++) 
	{
		if(arr[i] < iMin)
		{  iMin = arr[i];}

		else if(arr[i] > iMax)
		{  iMax = arr[i];}		
	}
	return (iMax -iMin);
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
	iRet = Difference(ptr,iLength);
	printf("difference bet maximum & minimum number is :%d\n",iRet);
	free(ptr);
	return 0;
}