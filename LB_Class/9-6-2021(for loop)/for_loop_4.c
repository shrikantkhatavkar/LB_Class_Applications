//Display  1 to 5 screen

#include<stdio.h>

void Display();    //Declaration

int main()
{
Display();       //Fuction call
return 0;        // return to OS
}

void Display()   //Defination
{
 int i=0;
 for(i=1; i<=5; i++)
   {
     printf("%d\n", i);
   }

}
