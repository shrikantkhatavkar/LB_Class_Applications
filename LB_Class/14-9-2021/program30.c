///// Take a input from user and count even digits
#include<stdio.h>

int CountEvenDigit(int);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = CountEvenDigit(iValue); //Function call
    printf("Number of even digit are :%d\n", iRet);
    getch();
    return 0;
}

//Function defination
int CountEvenDigit(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo == 0)
    {   return 1;   }

    if (iNo < 0)
    {
       iNo=-iNo;
    }
 
   while(iNo>0)
   {
    iDigit = iNo % 10; 
    if(iDigit%2==0)
	{
	   iCnt++;
	}       
    iNo = iNo/10; 
   }
    return iCnt;        
}