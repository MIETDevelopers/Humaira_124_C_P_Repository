//Name:Humaira
//Program: To calculate sum of digits of a number using while loop
#include<stdio.h>
int main(){
	int n, r, sum=0; // variable intializing and declaration
	printf("Enter a number\n");
	scanf("%d", &n);
	while(n>0) // using while codition loop
	{
		r = n%10;
		sum = sum + r;
		n = n/10; 
	}
	printf("sum %d",sum);
	return 0; 
}