//Name:Humaira Gani        Dated 20-03-2021
// arguments pass by reference
# include <stdio.h> // header file function
int swap(int *x, int *y){ //swap function name having integer data type and variable declaration of two arguements(input) as a pointers '*x' and '*y' of integer data type which stores the value at adress of variable 
    int temp; // declaration of integer data type variable 
    temp=*x; //value at adress of pointer 'x' is assigned to variable 'temp'
    x=y; //value of 'y' being assigned to 'x'
    *y=temp; //value of 'temp' is assigned to '*y' (value at adress of pointer)
}
 
int main(){ //main function of program
   int x, y; // Declaration of 'x' and 'y'
   x = 5; //initialization of 'x'
   y = 15; //initialization of 'y'
   printf("\nx=%d, y=%d",x,y); // printing the values of 'x' and 'y'
   swap(&x,&y); // function call by reference
   printf("\nx=%d, y=%d",x,y); //printing the values after swapping here values are shown in inex
   return 0; //output statement
} //Program ends