//Humaira 
//Program:Pointer variable intialization and adress of other variables
#include <stdio.h> //header file function
int main() //main function or body
{
   int var = 10; //Declaration and intailization of variable 'var'
   int *p; //Pointer declaration which will store value at adress of var
   p = &var; // address of 'var' is being Assigned to the pointer 'p'
   printf("Pointer value=%d, value at address of variable var in pointer=%d", p, *p);
   return 0; //return statement
} //ends