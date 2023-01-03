
#include<stdio.h>

void Display(int);    //Declaration

int main()
{
 int iNo=0;

 printf("Enter number\n");
 scanf("%d", &iNo);

  Display(iNo);       //Fuction call
  getch();
  return 0;        // return to OS
}

void Display(int iValue)   //Defination
{
 int i=0;
 for(i=1; i<=iValue; i++)
   {
     printf("%d\n",i);
   }

}
