#include<stdio.h>
// int Addition(int *Brr)
int Addition(int Brr[])
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 0; iCnt<5; iCnt++)
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

 iRet = Addition(Arr);  // Addition(100);
 printf("Addition is :%d\n", iRet);

return 0;
}