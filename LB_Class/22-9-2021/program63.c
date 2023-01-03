#include<stdio.h>
// int Addition(int *Brr)
int Addition(int Brr[], int iSize)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
	iSum =  iSum + Brr[iCnt];
	}
	return iSum;
}

int main()
{
   int Arr[5];  //Array of 5 integers
   int iRet = 0, iCnt = 0;

   printf("Enter number\n");

   for(iCnt = 0; iCnt<5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

 iRet = Addition(Arr,5);  // Addition(100(memory address));
 printf("Addition is :%d\n", iRet);

return 0;
}