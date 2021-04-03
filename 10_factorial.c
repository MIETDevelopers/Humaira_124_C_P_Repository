/* Humaira 
C Program to Find Factorial of a Number Using For Loop */
#include <stdio.h>
 
int main()
{
  int i, Number; //Variable declaration 
  int Factorial = 1; // factorial declaration and intialization
 
  printf("\n Enter any number to Find Factorial\n"); //printf calling function, if the Entered number is 2
  scanf("%d", &Number); //taking input from user as number
  for (i = 1; i <= Number; i++) // using for loop 
   {
     Factorial = Factorial * i; // 2*2 
   }
 
  printf("\nFactorial of %d = %d\n", Number, Factorial); //printf calling, 2=4
 
  return 0;
}
