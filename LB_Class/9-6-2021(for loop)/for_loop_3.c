//Display  1 to 5 screen

#include<stdio.h>

void Display()
{
 int i=0;
 for(i=1; i<=5; i++)
   {
     printf("%d\n", i);
   }

}

int main()
{
Display();       //Fuction call
getch();
return 0; // return to OS
}