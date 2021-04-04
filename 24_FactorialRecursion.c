//Humaira
//Program: to calculate  Factorial using Recursive Functions 
#include<stdio.h> // header function file 
int main() //main function    
{    
 int i,fact=1,number; //Declaration of variable and initializing 'fact' variable
 printf("Enter a number: "); //print function
  scanf("%d",&number); //user inputs number   
    for(i=1;i<=number;i++){   //using for loop  
      fact=fact*i; //fact equals to fact itself multiply by 'i' variable
  }    
  printf("Factorial of %d is: %d",number,fact); //printing factorial     
return 0;  
} //end

