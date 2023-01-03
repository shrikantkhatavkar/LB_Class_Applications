
#include<stdio.h>

int Display(int);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Display(iValue); //Function call
    printf("Addition of digit is :%d\n", iRet);
    getch();
    return 0;
}

//Function defination
int Display(int iNo)
{
    int iDigit = 0, iSum = 0;
 
   while(iNo>0)
   {
    iDigit = iNo % 10;        
    iSum = iSum+iDigit;  
    iNo = iNo/10; 
   }
    return iSum;        
}