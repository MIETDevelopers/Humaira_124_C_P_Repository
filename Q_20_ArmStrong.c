//Humaira
//Program to check wether the number is Armstrong or not
//Armstrong number means sum of individual digit cubes equal to itself e,g the number is 153 and sum of its individual digits cubes is equal to number 153 it self
#include<stdio.h> // header function
int main(){ //main function
	int n, r, c, sum=0, temp; //variable declaration and intialization 
	printf("Enter n value:"); // printf calling function
	scanf("%d",&n); // taking input from user
	temp = n; //assigning value of n to temp variable
	while(n>0) //while loop, condition
	{
		r = n%10; 
		c = r*r*r; //Armstrong's ormulla
		sum = sum + c;
		n = n/10;
	}
		n = temp;
	if(n==sum)//true if n equal to equal to sum
		printf("%d is an Armstrong number\n",temp); //printing number is Armstrong
	else//false
		printf("%d is not an Armstrong\n",temp); //number is not Armstrong
	return 0; //output statement
} //end 