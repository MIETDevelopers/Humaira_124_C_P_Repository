// Humaira Gani        Dated: 23-03-21
//Swap by value Program 
// arguments pass by value 
# include <stdio.h>
int swap(int x, int y){ // swap function name having integer data type containing two arguements(input) 'x' and 'y' of integer data type
    printf("Values within function before swapping: x=%d, y=%d\n",x,y); //printing values before swapping means the value of 'x' and 'y' remain unchanged here
    int temp; //Declaration of temp variable 
    temp=x; //assigning the value of 'x' to 'temp' i;e 5
    x=y; //assigning the value of 'y' to 'x' i;e 15
    y=temp; //assigning the value of 'temp' to 'y'
    printf("Values within function after swapping: x=%d, y=%d\n",x,y );//printing thr values after swapping i;e x=5=y and y=15=x
    return 0;
}
 
int main(){ // main body funtion here our program begins to run
   int x, y; // // Declaration of varaibles 
   x = 5; // initiallization of 'x'
   y = 15; //initiallization of 'y'
   printf("Values before function calling: x=%d, y=%d\n",x,y); //prints the initiallizes values of variables with in main function
   swap(x,y); // function call by value
   printf("Values after function calling: x=%d, y=%d\n",x,y); //printing the values after function callin
   return 0; //output statement 
}// programs ends here