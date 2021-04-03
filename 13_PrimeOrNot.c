//Humaira
//Program: To check whether the Number is prime or not
#include <stdio.h> //header file function
int main(){ //body of prgram
	int n, count=2, flag=1; //declaration of variables and intializations
	printf("Enter a number to be checked"); //printf calling function
	scanf("%d",&n); //user input
	while(count<n) //while condition loop
	{
		if(n%count==0) //if true
		{
			flag=0;
			break; //if will stop here
		}
		count++; //increement by 1
	}
	if(flag) printf("%d is a prime number\n" ); //true for prime
	else     printf("%d is not a prime number"); //false
	return 0;
} 
