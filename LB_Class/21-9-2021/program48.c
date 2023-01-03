// Input 6
// Output a b c d e f

#include<stdio.h>

void Display(int iNo)
{
int iRow = 3, iCol = 4, i = 0, j= 0;

for (i = 1; i<=iRow; i++)
	{   
	for (j = 1; j<=iCol; j++)
		{
			printf("*\t");
		}
	printf("*\n");

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