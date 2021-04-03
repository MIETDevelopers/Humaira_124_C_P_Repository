//Humaira
//Program to check whether the number is even or odd
#include <stdio.h> //including all input and output files
int main(){ //main body
	int number; //Declaration of number
	printf("Enter a number"); 
	scanf("%d",&number); //user input
	if(number%2==0){ //if codition true for prime number
		printf("Entered number %d is Even",number);
	}
		else{ //false for not prime number
		printf("Enterd number %d is odd",number);
	} //if else stops here
	return 0;
}
