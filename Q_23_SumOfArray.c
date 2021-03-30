// Humaira 
// Purpose:Sum of an array of 10 elements and printing their value
#include <stdio.h> // Pre-Processive to include standard input and output funtion header files
 
int main() // Start of main fucntion  
{
// 2D array declaration and initialization, it is of size 15   
  int my_array[5][3] = {
    {1, 2, 3},      //row 1, each row has 3 coloumns
    {4, 5, 6},      //row 2
    {7, 8, 9},      //row 3
    {10, 11, 12},   //row 4
    {13, 14, 15}    //row 5
  };
  // accessing and printing the elements
  for ( int i = 0; i < 5; i++ ) { //for loop for printing rows
      for ( int j = 0; j < 3; j++ ) { //nested for loop for printing elements of coulumns
         printf("my_array [%d][%d] = %d\n", i,j, my_array[i][j] );
      }
   }
   return 0; //output statement
} // end      