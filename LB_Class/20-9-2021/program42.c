// Input 4
// Output 4  3  2  1

#include<stdio.h>

int Display(int iNo)
{
int iCnt = 0;
 
for (iCnt = iNo; iCnt>=1; iCnt--)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d", &iValue);

Display(iValue);

return 0;
} 