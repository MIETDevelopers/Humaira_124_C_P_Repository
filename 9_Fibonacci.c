//Humaira 
#include<stdio.h>
int main (){
	int n, a=0, b=1, c; //variable declaration and intialization, if n=7 
	printf("Enter the limit:");
	scanf("%d",&n);
	for(int i=1; i<=7; i++)
	{
		printf("%d\n",a); //here a=0, b=1, c=? 
		c = a+b;
		a = b; //value of storing in a
		b = c; //value of c assigning to b
	}
		return 0;
}