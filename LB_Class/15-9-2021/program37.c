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
   	int iSum = 0, iCnt = 0;
	for(iCnt=1; iCnt<=(iNumber/2); iCnt++)
	{
	if((iNumber%iCnt)==0)
		{  iSum = iSum + iCnt;    }
	}

  if(iSum == iNumber)
	{  return true;   }
  else
	{ return false;   }
}
