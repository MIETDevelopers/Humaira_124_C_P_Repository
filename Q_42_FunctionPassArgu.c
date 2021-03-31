//Humaira 
//Program:To display function implementation which returns a structure
#include <stdio.h> //header file function
struct student { //'struct' is a keyword and 'student' is a tag
   char name[50]; //array of size 50 of character data type 
   int age; //declaration of variable 'var'
}; //ends up with semicolon  

// function prototype
void display(struct student s); // return type void

int main() { //main function
   struct student s1; // variable declaration

   printf("Enter name: "); //printf calling function

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]%*c", &s1.name); //user inputs s1.name

   printf("Enter age: "); //printf calling function
   scanf("%d", &s1.age); //user inputs s1.age

   display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) { //return type void
   printf("\nDisplaying information\n"); 
   printf("Name: %s", s.name); //printing name
   printf("\nAge: %d", s.age); //prints age
}