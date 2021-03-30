//Humaira
//Program to check whether the number is prime or not
#include<stdio.h> //header function file
int main(){ //main function
	int n, i, count=0; //declaration and intialization
	printf("\nEnter n value:");
	scanf("%d",&n); //reading integer into variable n
	for(i=1; i<=n; i++) //using for loop, intialize, condition, inreement by 1 
	{
		if(n%i==0) //if conditional 
		{
			count++;//increment by 1
		}
		if(count==2) //codition for prime number
			printf("\nPrime Number"); //prime output
		else //if condition is not satisfied
			printf("\nNot Prime"); //not prime output
	}

		return 0; 
}