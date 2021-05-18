//Name:Humaira Gani        Dated 20-03-2021
 //Program:To swap two numbers using call by reference.             
#include <stdio.h>      //Pre-process directive to include standard input and output functions header file
 void swap(int *x, int *y);//swap function name having integer data type and variable declaration of two arguements(input) as a pointers '*x' and '*y' of integer data type which stores the value at adress of variable
 int main(){
   //Printf and scanf function calling
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
      swap(&x, &y); 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp; // declaration of integer data type variable 
   //swapping
   temp = *b; //storing value of b at temp 
   *b = *a;
   *a = temp;   
} //program  ends
