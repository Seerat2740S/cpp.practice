#include <stdio.h>
#include <math.h>

int main()
{
  int Number, Temp, Reminder, Times =0, Sum = 0;
 
  printf("\nPlease Enter number to Check \n");
  scanf("%d", &Number);
  //Helps to prevent altering the original value
  Temp = Number;
  while (Temp != 0) 
   {
      Times = Times + 1;
      Temp = Temp / 10;
   }
   
  Temp = Number;
  while( Temp > 0)
   {
     Reminder = Temp %10;
     Sum = Sum + pow(Reminder, Times);
     Temp = Temp /10;
   }
 
  printf("Sum of entered number is = %d\n", Sum);

  if ( Number == Sum)
      printf("%d is Armstrong Number.\n", Number);
  else
      printf("%d is not armstrong\n", Number);
 
  return 0;
}