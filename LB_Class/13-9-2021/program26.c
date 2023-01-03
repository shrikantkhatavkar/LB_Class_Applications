
#include<stdio.h>

void Display(int);

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    Display(iValue); //Function call
    getch();
    return 0;
}

//Function defination
void Display(int iNo)
{
    int iDigit = 0;
 
   while(iNo>0)
   {
    iDigit = iNo % 10;        
    printf("%d\n", iDigit);  
    iNo = iNo/10;             
   }
}