///////////////////////////////////////////////////////////////
//Accept the number from user and check weather perfect or not
///////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int);
bool CheckPerfect(int);

int main()
{
    int iValue = 0; 
    bool bRet = false; 
    printf("Enter number\n");
    scanf("%d", &iValue);
    bRet = CheckPerfect(iValue);
    if(bRet == true)
      {  printf("Number is perfect");   }
   else
      {  printf("Number is not perfect");   }
    return 0;
}

bool CheckPerfect(int iNumber)
{
   int iRet = 0;
   if(iNumber<0)
    { iNumber = -iNumber;   }
   iRet = SumFactors(iNumber);

  if(iRet== iNumber)
	{  return true;   }
  else
	{ return false;   }
}

int SumFactors(int iNo)
{
   int iSum = 0, iCnt = 0;

   if(iNo<0)
	{  iNo = -iNo; }     ///Updater

   for(iCnt=1; iCnt<=(iNo/2); iCnt++)
	{
	if((iNo%iCnt)==0)
		{  iSum = iSum + iCnt;    }
	}
  return iSum;
}