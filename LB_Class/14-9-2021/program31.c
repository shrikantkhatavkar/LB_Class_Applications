///// Take a input from user and count even digits and add them 1134, 2264, 3357
#include<stdio.h>

int SumEven(int);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = SumEven(iValue); //Function call
    printf("Addition of even digit are :%d\n", iRet);
    getch();
    return 0;
}

//Function defination
int SumEven(int iNo)
{
    int iDigit = 0, iSum = 0;
    int iCnt = 0;
    
    if (iNo < 0)
    {
       iNo=-iNo;
    }
 
   while(iNo>0)
   {
    iDigit = iNo % 10; 
    if(iDigit%2==0)
	{
	   iSum = iSum+iDigit;
	}       
    iNo = iNo/10; 
   }
    return iSum;        
}