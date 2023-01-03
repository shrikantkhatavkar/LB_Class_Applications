#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int);

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet==true)
	{
	   printf("number is pallindrome");
	}
    else
	{
	  printf("number is not pallindrome");
	}
    
   return 0;   
}


bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int Temp =iNo;
    
   while(iNo!=0)
   {
    iDigit = iNo % 10; 
    iRev = (iRev*10)+iDigit;      
    iNo = iNo/10; 
   }
   if(iRev==Temp)
	{
	   return true; 
	}
   else
	{
	   return false;
	}     
}