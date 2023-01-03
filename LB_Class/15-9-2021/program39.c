///////////////////////////////////////////////////////////////
//Accept the number from user and display power
///////////////////////////////////////////////////////////////

#include<stdio.h>

int DisplayPower(int, int);

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0; 

    printf("Enter base number\n");
    scanf("%d", &iValue1);

    printf("Enter upper number\n");
    scanf("%d", &iValue2);

    iRet = DisplayPower(iValue1, iValue2);
    printf("result is %d\n", iRet);

    return 0;
}

int DisplayPower(int iNo1, int iNo2)
{
 int iCnt = 0, iMulti = 1;
 //if((iNo1 || iNo2)== 0)
//	{ return;  }
 if(iNo1 < 0 )
	{   iNo1 = -iNo1;  }
 if(iNo2 < 0 )
	{   iNo2 = -iNo2;  }

 for(iCnt = 1; iCnt<=iNo2; iCnt++)
	{
           iMulti = iMulti*iNo1;
	}
 return iMulti;
}
