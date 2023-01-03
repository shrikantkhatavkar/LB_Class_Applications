///// Take a input from user and count even digits and add them 1134, 2264, 3357
#include<stdio.h>

int Reverse(int);

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue); //Function call
    printf("Reverse number is :%d\n", iRet);
    return 0;
}

//Function defination
int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    
 
   while(iNo!=0)
   {
    iDigit = iNo % 10; 
    printf("%d\n", iDigit);
    iRev = (iRev*10)+iDigit;      
    iNo = iNo/10; 
   }
    return iRev;        
}